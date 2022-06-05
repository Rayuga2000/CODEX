print "Enter the String: ";
chomp($str=<>);

print "Enter the word or character to find: ";
chomp($value=<>);

$temp=($str=~/$value/);
if($temp){
    print "Match: $temp";
}
else{
    print "Match: 0";
}