#WAP to find a palindrome string/number
x=input("Enter the Number/String:")

if x.lower()==x.lower()[-1::-1]:
    print(x,"is Palindrome")
else:
    print(x,"is not Palindrome")