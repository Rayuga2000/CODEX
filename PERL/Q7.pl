print "Enter the Sentence: ";
chomp($str=<>);

$str=~tr/a-z/A-Z/;
print "New Sentence is: $str";