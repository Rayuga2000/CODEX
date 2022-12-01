#Pascal Triangle
def fact(n):
    fact=1
    if n!=0 or n!=1:
        for i in range(2,n+1):
            fact*=i
    return fact

def nCr(n,r):
    return (fact(n)//(fact(r)*fact(n-r)))

n=int(input("Enter range: "))
for i in range(n):
    print(" "*(n-i),end="")
    for j in range(i+1):
        print(nCr(i,j),end=" ")
    print()
