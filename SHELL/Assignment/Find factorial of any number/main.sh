#!/bin/bash

printf "Enter the Number: ";
read num;
f=1;

for((i=num;i>=1;i--))
do
   f=$((f*i));
done

echo "Factorial of $num is==> $f";
