#get n!/r!
def fact(n):
    if n==1 or n==0:
        return 1
    return n*fact(n-1)

def n_r(n,r):
    return fact(n)/fact(r)

n,r=input("Enter value of n & r: ").split()
print("Result: ",n_r(int(n),int(r)))