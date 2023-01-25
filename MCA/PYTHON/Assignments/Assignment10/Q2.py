x,y,z=map(int,input("Enter the Numbers: ").split())
print("\nNumbers are: ",x,y,z)

z,y,x=x,z,y
print("Result 1: ",x,y,z)

x,y,z=(z+1),(x-2),(z**x)
print("Result 2: ",x,y,z)

y,z,x=(y/x),(x*y),(z**x)
print("Result 3: ",x,y,z)