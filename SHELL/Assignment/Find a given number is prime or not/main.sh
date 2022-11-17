#!/bin/bash
printf "Enter the Number: ";
read num;

for((i=2;i<num;i++))
do
  if((num%i==0))
  then
      flag=1;
      break;
  fi
done

if((num==0 || num==1))
then
    echo "$num is not a Prime Number nor a Composite Number";
elif((flag==1))
then
    echo "$num is not a Prime Number";
else
    echo "$num is a Prime Number";
fi