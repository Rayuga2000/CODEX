"""Have the function take the num parameter being passed
which will be a 4-digit number with at least two distinct digits.
Your program should perform the following routine on the number: Arrange the digits in descending order 
and in ascending order (adding zeroes to fit it to a 4-digit number), and subtract the smaller number
from the bigger number. Then repeat the previous step. Performing this routine will always cause you to
reach a fixed number: 6174.
Then performing the routine on 6174 will always give you 6174 (7641-1467-6174).
Your program should return the number of times this routine must be performed until 6174 is reached.
For example: if num is 3524 your program should return 3 because of the following steps:
(1) 5432-2345 3087, (2) 8730-0378 = 8352, (3) 8532-2358=6174."""

count=0

def Kaprekar_Constant(num):
    global count
    num=str(num)

    if len(num)<4 or len(set(num))<2:
        return "Number can't obtain the constant"

    if num=='6174':
        return count

    asc_num=int(''.join(sorted(num)))
    desc_num=int(''.join(sorted(num,reverse=True)))

    diff=abs(desc_num-asc_num)

    diff=str(diff)

    if len(diff)<4:
        for i in range(4-len(diff)):
            diff+='0'

    count+=1

    return Kaprekar_Constant(diff)

print(Kaprekar_Constant(input("Enter the Number: ")))