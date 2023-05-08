#!/bin/bash

echo "Enter two numbers: "
read num1 num2

echo "Arithmetic operations: "
echo "$num1 + $num2 = $(expr $num1 + $num2)"
echo "$num1 - $num2 = $(expr $num1 - $num2)"
echo "$num1 * $num2 = $(expr $num1 \* $num2)"
echo "$num1 / $num2 = $(expr $num1 / $num2)"