#!/bin/bash

printf "Enter the Number: ";
read num;

if(($(($num%2))==0))
then
echo "The Number is Even"
else
echo "The Number is Odd"
fi