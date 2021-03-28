#!/bin/bash
printf "Enter the Range: ";
read n;

printf "The Fibonacci Series are: "
printf "0 1 ";
n1=0;
n2=1;

for((i=2;i<n;i++))
do
  sum=$((n1 + n2));
  printf "$sum "
  n1=$n2;
  n2=$sum;
done
printf "\n";
