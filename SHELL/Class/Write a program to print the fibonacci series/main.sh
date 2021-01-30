#!/bin/bash

n1=0;
n2=1;

printf "Enter the range: ";
read r;

printf "Fibonacci Series=> ";
for((i=0;i<r;i++))
do
    printf "$n1 ";
    temp=$((n1+n2));
    n1=$n2;
    n2=$temp;
done
echo