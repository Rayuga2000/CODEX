#Bubble Sort
def BSort(l):
    n=len(l)
    count=0
    
    for i in range(n):
        for j in range(n-1):
            if l[j]>l[j+1]:
                l[j],l[j+1]=l[j+1],l[j]
                count+=1
        if count==0:
            break

l=list(map(int,input("Enter Data: ").split()))

BSort(l)

print("Sorted Data: ",l)