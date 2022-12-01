#Find total no. of Duals in K-Map
l2=[]
r,c=map(int,input("Enter no. of rows & cols: ").split())

print("Enter the data(0/1):")
for i in range(r):
    l1=[]
    for j in range(c):
        while True:
            n=int(input())
            if n in range(2):
                l1.append(n)
                break
            else:
                print("Please enter a valid no.(0/1)")
    l2.append(l1)

print("\n---Matrix---")
for i in range(r):
    for j in range(c):
        print(l2[i][j],end=" ")
    print()

temp=[]
Hcount=0
Vcount=0
HCcount=0
VCcount=0

if c>1:
    for i in range(r):
        for j in range(c-1):
            index=[str(i)+str(j),str(i)+str(j+1)]
            if index[0] not in temp and index[1] not in temp:
                if l2[i][j]==1 and l2[i][j+1]==1:
                    Hcount+=1
                    temp.append(index[0])
                    temp.append(index[1])

if c>2:
    for i in range(r):
        index=[str(i)+str(0),str(i)+str(c-1)]
        if index[0] not in temp and index[1] not in temp:
            if l2[i][0]==1 and l2[i][c-1]==1:
                HCcount+=1
                temp.append(index[0])
                temp.append(index[1])

if r>1:
    for i in range(r-1):
        for j in range(c):
            index=[str(i)+str(j),str(i+1)+str(j)]
            if index[0] not in temp and index[1] not in temp:
                if l2[i][j]==1 and l2[i+1][j]==1:
                    Vcount+=1
                    temp.append(index[0])
                    temp.append(index[1])

if r>2:
    for i in range(c):
        index=[str(0)+str(i),str(r-1)+str(i)]
        if index[0] not in temp and index[1] not in temp:
            if l2[0][i]==1 and l2[r-1][i]==1:
                VCcount+=1
                temp.append(index[0])
                temp.append(index[1])

#print("\nNo. of Horizontal Duals: ",Hcount)
#print("No. of Horizontal Corner Duals: ",HCcount)
#print("No. of Vertical Duals: ",Vcount)
#print("No. of Vertical Corner Duals: ",VCcount)
print("\nTotal no. of Duals: ",Hcount+Vcount+HCcount+VCcount)