#Pascal Triangle
import math

def nCr(n,r):
    return (math.factorial(n)//(math.factorial(r)*math.factorial(n-r)))

n=int(input("Enter range: "))
for i in range(n):
    print(" "*(n-i),end="")
    for j in range(i+1):
        print(nCr(i,j),end=" ")
    print()
