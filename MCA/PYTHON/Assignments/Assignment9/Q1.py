#get summation(n^n/n!)
def fact(n):
    if n==1 or n==0:
        return 1
    return n*fact(n-1)

def func(r):
    sum=0
    for i in range(1,r+1):
        sum+=(i**i)/fact(i)
    return sum

print("Result: ",func(int(input("Enter Range: "))))
