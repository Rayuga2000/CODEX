#Selection Sort
def SelSort(l):
    n=len(l)
    for i in range(n):
        for j in range(i+1,n):
            min=i
            if l[min]>l[j]:
                min=j
        l[i],l[min]=l[min],l[i]

l=[3,2,4,5,1]

SelSort(l)
print("Sorted Array: ",l)