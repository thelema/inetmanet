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
	my $d0 = $data{$src}{$dst}[0];
	my $d1 = $data{$src}{$dst}[1] || 0;
	my $d2 = $data{$dst}{$src}[0];
	my $d3 = $data{$dst}{$src}[1] || 0;

	push @edges, {diff => $d0-$d1, src => $src, dst => $dst};
	push @edges, {diff => $d2-$d3, src => $dst, dst => $src};
	$min = min [$d0-$d1, $d2-$d3,$min];
	$max = max [$d0-$d1, $d2-$d3,$max];
    }
}

#my $mindist = min (map {abs $_->{diff}} @edges);
#my $maxdist = max (map {abs $_->{diff}} @edges);

foreach my $e (@edges) {
    my $color = $e->{diff} > 0 ? "red" : "green";
    my $w = log $e->{diff} - log $max;
    print "  $e->{src} -> $e->{dst} [color=$color penwidth=\"$w\"];\n";
}

print "}\n";

#./convert.pl Test1.ned results/General-0.sca | neato -y -Tpng -o net_noif.png -s40
