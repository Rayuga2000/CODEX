#Selection Sort
def SelSort(l):
    n=len(l)
    for i in range(n):
        min=i
        for j in range(i+1,n): 
            if l[min]>l[j]:
                min=j
        l[i],l[min]=l[min],l[i]

l=list(map(int,input("Enter Data: ").split()))

SelSort(l)
print("Sorted Data: ",l)