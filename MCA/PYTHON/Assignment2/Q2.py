n=int(input("Enter the range: "))

for i in range(n):
    print(" "*(n-i),end="")
    for j in range(1,i+2):
        print(j,end="")
    if(i!=0):
        for k in range(i,0,-1):
            print(k,end="")
    print()