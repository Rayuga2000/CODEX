6174 is the Kaprekar Constant. This number is special as we always get this number when following steps are followed for any four digit number such that all digits of number are not same, i.e., all four digit numbers excluding (0000, 1111, …)
 

1) Sort four digits in ascending order and store result in a number “asc”.
2) Sort four digits in descending order and store result in a number “desc”.
3) Subtract number larger number from smaller number, i.e., abs(asc – desc).
4) Repeat above three steps until the result of subtraction doesn’t become equal to the previous number.
5) We always end up with 6174.
