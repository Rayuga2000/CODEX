print "Enter the String: ";
chomp($str=<>);

$str=~tr/a-z/A-Z/;
print "New String is: $str";