#GCD recursion
def GCD(x,y):
  if x%y==0:
    return y
  else:
    return GCD(y,x%y)

x,y=map(int,input("Enter the Numbers: ").split())
print("GCD: ",GCD(x,y))