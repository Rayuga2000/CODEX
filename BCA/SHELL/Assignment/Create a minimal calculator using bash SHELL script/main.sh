#!/bin/bash
echo "Enter two Numbers: ";
read a;
read b;

echo "1)Addition";
echo "2)Substraction";
echo "3)Multiplication";
echo "4)Divition";
printf "Enter your choice: ";
read ch;

case $ch in
1)res=$((a+b))
;;
2)res=$((a-b))
;;
3)res=$((a*b))
;;
4)res=$(bc -l<<< "$a/$b")
;;
esac

echo "Result=> $res"