"""WAP with recursion to show the sum of a number and store it in a list
then use the result to show fibonacci series of a given range"""

def add(n):
    if n==0:
        return 0
    else:
        return (n%10)+add((n-(n%10))/10)
        
def fibo(count,r,x,y):
    if count<r:
        print(x+y,end=" ")
        fibo(count+1,r,y,x+y)

l=[add(int(input("Enter the Number: ")))]

print(l)

r=int(input("Enter range: "))

print("Fibonacci series: ",l[0],l[0]+1,end=" ")
fibo(0,r,l[0],l[0]+1)