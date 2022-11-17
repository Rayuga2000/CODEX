n=int(input("Enter the Range: "))

a=0
b=1

print("The Fibonacci series are:",end=" ")
print("0 1",end=" ")
for i in range(n-2):
    c=a+b
    print(c,end=" ")
    a=b
    b=c
