@str=qw/Tushar Sarkar/;

$count=0;

foreach $s (@str){
    $count+=($s=~tr/[a|e|i|o|u]/[a|e|i|o|u]/);
}

print "No. of vowels: $count\n";
