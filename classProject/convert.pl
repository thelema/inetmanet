#!/usr/bin/perl -w

use Data::Dumper;


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
$min = 1000000000;
$max = 0;
foreach my $sca (@ARGV) {
    
    
    open SCA, $sca;
    while (<SCA>) {
	if (/scalar \w+.(\w+).wlan.mgmt\s+\w+.(\w+).networkLayer.arp\s+(\d+)/) {
	    $data{$2}{$1}[$i]=$3;
	    $max = $3 if $3 > $max;
	    $min = $3 if $3 < $min;
	} elsif (/scalar \w+.(\w+).+\s+TRSS\s+(\d+)/) {
	    $nodes{$1}{cost} = $2;
	}
    }
    close SCA;
    
    
    $i++;
}

$range = $max - $min;

foreach my $name (keys %nodes) {
    $pos = $nodes{$name}{pos};
    $cost = $nodes{$name}{cost};
    print "  $name [label=\"$name [$cost]\" pos=\"$pos!\"];\n";
}

foreach my $src (keys %data) {
    foreach my $dst (keys %{$data{$src}}) {
	next if $dst le $src;
	my $d0 = $data{$src}{$dst}[0];
	my $d1 = $data{$src}{$dst}[1] || 0;
	my $d2 = $data{$dst}{$src}[0];
	my $d3 = $data{$dst}{$src}[1] || 0;

	my $diff = $d0 - $d1;
	my $w = log (abs $diff/$range) + 10;
	$color = ($diff > 0) ? "red" : "blue";
	
	print "  $src -> $dst [color=$color penwidth=$w];\n";

	$diff = $d2 - $d3;
	$w = log (abs $diff/$range) + 10;
	$color = ($diff > 0) ? "red" : "blue";
	
	print "  $dst -> $src [color=$color penwidth=$w];\n";
    }
}

print "}\n";

#./convert.pl Test1.ned results/General-0.sca | neato -y -Tpng -o net_noif.png -s40
