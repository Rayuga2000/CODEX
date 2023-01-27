#nCr
def fact(n):
    if n==1 or n==0:
        return 1
    return n*fact(n-1)

def nCr(n,r):
    return fact(n)/(fact(n-r)*fact(r))

n,r=map(int,input("Enter value of n & r: ").split())
print("nCr: ",nCr(n,r))