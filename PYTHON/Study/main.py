n=int(input("Enter value of n: "))
r=int(input("Enter value of r: "))

def fact(num):
    if(num>1):
        return num*fact(num-1)
    elif(num==1):
        return 1

ncr=int(fact(n)/(fact(n-r)*fact(r)))

print("Result: ",ncr)