print "Enter a String: ";
chomp($string=<>);

@list = split(' ',$string);

$size=@list;
    
$first=($list[0]=~'MCA')?1:0;
$last=($list[--$size]=~'bw')?1:0;

print "First: $first\nLast: $last";