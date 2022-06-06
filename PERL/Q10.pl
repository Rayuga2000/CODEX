@list = qw/MCA food foosball  subeo footnote terfoot canic footbrdige bw/;

$size=@list;
$first=0;
$last=0;
    
if($list[0]=~'MCA' && $list[--$size]=~'bw'){
    $first=1;
    $last=1;
}
print "First: $first\nLast: $last";