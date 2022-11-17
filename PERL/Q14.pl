%lookup = ("dave", 1234,
           "peter", 3456, 
           "andrew", 6789);

$lookup{"adam"} = 3845;

delete $lookup{"peter"};

@names = keys(%lookup);
print "@names\n";

@codes = values(%lookup);
print "@codes\n";
