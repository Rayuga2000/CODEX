print "Enter a sentence: ";
chomp($string=<>);

@str=split('',$string);

$size=@str;
for($i=0;$i<$size;$i++){
    if($str[$i]=~' '){
        $str[++$i]=~tr/[a-z]/[A-Z]/;
    }
}
$str[0]=~tr/[a-z]/[A-Z]/;

$string=join('',@str);
print "$string";