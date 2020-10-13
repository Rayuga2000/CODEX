printf "Enter 3 Numbers: ";
read n1 n2 n3;

if((n1>n2))
then
    if((n1>n3))
    then
        echo "$n1 is Maximum";
    else
        echo "$n3 is Maximum";
    fi
else
    if((n2>n3))
    then
        echo "$n2 is Maximum";
    else
        echo "$n3 is Maximum";
    fi
fi