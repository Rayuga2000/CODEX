print "Enter the String: ";
chomp($string=<>);

print "Enter the word or character to find: ";
chomp($value=<>);

$temp=0;
@str=split(' ',$string);
foreach $x(@str){
    if($x=~/$value/){
        $temp++;
    }
}

print "Match: $temp";