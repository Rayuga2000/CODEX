#Bubble Sort
def BSort(l):
    n=len(l)
    
    for i in range(n):
        """1st time it checks between 9 items 2nd time it checks between 8 items"""
        for j in range(n-i-1):
            if l[j]>l[j+1]:
                l[j],l[j+1]=l[j+1],l[j]

l=list(map(int,input("Enter Data: ").split()))

BSort(l)

print("Sorted Data: ",l)