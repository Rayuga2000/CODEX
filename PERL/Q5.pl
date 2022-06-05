print "Enter the String: ";
chomp($str=<>);

print "Enter the word or character to change: ";
chomp($value=<>);

print "Enter the word or character to change into: ";
chomp($chng=<>);

$str=~s/$value/$chng/;
print "New String: $str";