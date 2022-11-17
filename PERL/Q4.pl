print "Enter the String: ";
chomp($string=<>);

$temp=0;

print "Enter choice: 1)character 2)word => ";
chomp($choice=<>);

use feature qw(switch);
given($choice){
    when(1){@str=split('',$string);}
    when(2){@str=split(' ',$string);}
}

print "Enter the word or character to find: ";
chomp($value=<>);

foreach $x(@str){
    if($x=~/$value/){
        $temp++;
    }
}

print "Match: $temp";