#!/usr/bin/perl -w

use Data::Dumper;
use List::Util qw[min max];


my $ned = shift;

print "digraph G {\n";

open NED, $ned;

while (<NED>) {
    if (/(\w+): WSNNode/) {
	$name = $1;
	<NED> =~ /display\("p=(\d+),(\d+)/;
	$nodes{$name}{pos} = "$1.,$2.";
    }
}

close NED;
$i = 0;
foreach my $sca (@ARGV) {
    
    
    open SCA, $sca;
    while (<SCA>) {
	if (/scalar \w+.(\w+).wlan.mgmt\s+\w+.(\w+).networkLayer.arp\s+(\d+)/) {
	    $data{$2}{$1}[$i]=$3;
	} elsif (/scalar \w+.(\w+).+\s+TRSS\s+(\d+)/) {
	    $nodes{$1}{cost} = $2;
	} elsif (/scalar \w+.configurator\s+(\w+)\s+(\d+)/) {
	    $ip1 = $2>>24; $ip2 = ($2 & 0xFFFFFF) >>16; 
	    $ip3 = ($2 & 0xFFFF)>>8; $ip4=$2 & 0xFF;
	    $ip = "$ip1.$ip2.$ip3.$ip4";
	    $by_ip{$ip} = $1;
	} elsif (/scalar \w+.(\w+).networkLayer.ip\s+([0-9\.]+)\s+(\d+)/) {
	    $src = $by_ip{$2};
	    $ipdata{$src}{$1}[$i]=$3;
	    $w = log (1+$3) / (log 2) - 14;
#	    print "  $src -> $1 [color=blue penwidth=\"$w\"];\n";
	}
    }
    close SCA;
    $i++;
}

foreach my $name (keys %nodes) {
    $pos = $nodes{$name}{pos};
    $cost = $nodes{$name}{cost};
    print "  $name [label=\"$name [$cost]\" pos=\"$pos!\"];\n";
}


my $min = 100000000000;
my $max = 0;
foreach my $src (keys %data) {
    foreach my $dst (keys %{$data{$src}}) {
	next if $dst le $src;
	my $d0 = $data{$src}{$dst}[0] - ($data{$src}{$dst}[1] || 0);
	my $d1 = $data{$dst}{$src}[0] - ($data{$dst}{$src}[1] || 0);

	push @edges, {diff => $d0, src => $src, dst => $dst};
	push @edges, {diff => $d1, src => $dst, dst => $src};
	$d0 = abs $d0; $d1 = abs $d1;
	$min = $d0 if $d0 < $min;
	$max = $d0 if $d0 > $max;
	$min = $d1 if $d1 < $min;
	$max = $d1 if $d1 > $max;
    }
}

foreach my $e (@edges) {
    my $color = $e->{diff} > 0 ? "red" : "green";
    my $w = (log abs $e->{diff}+1 - log $min+1) / log 2;
    print "  $e->{src} -> $e->{dst} [color=$color penwidth=\"$w\"];\n";
}

print "}\n";

#./convert.pl Test1.ned results/General-0.sca | neato -y -Tpng -o net_noif.png -s40
