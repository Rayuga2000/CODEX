n=int(input("Enter the range: "))

for i in range(n,0,-1):
    for j in range(i):
        print(end=" ")
    print("*"*((n+1)-i),end=" ")
    print()