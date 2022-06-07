print "Enter the String: ";
chomp($string=<>);

print "Enter the word or character to find: ";
chomp($value=<>);

$temp=0;
@str=split(' ',$string);
foreach $x(@str){
    if($x=~$value){
        $temp++;
    }
}

if($temp){
    print "Match: $temp";
}
else{
    print "Match: 0";
}