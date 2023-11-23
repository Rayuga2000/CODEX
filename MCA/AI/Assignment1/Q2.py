n=int(input("Enter range: "))

for i in range(1,n+1):
    print((" "*((n+1)-i))+str((((10**i)-1)//9)**2))