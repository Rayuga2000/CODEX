printf "Enter the Number: "
read n;

if(($n==0 || $n==1))
then
echo "$n is not a prime number";
else
for((i=2;i<=n/2;i++))
do
if(($n%i==0))
then
echo "$n is a prime number";
break;
else
echo "$n is not a prime number"
break;
fi
done
fi