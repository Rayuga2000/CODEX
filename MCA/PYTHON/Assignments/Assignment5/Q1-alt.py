#Binary search using while loop

def bsearch(n,low,high):
    while(low<=high):
        mid=(low+high)//2
        if n==l[mid]:
            return mid+1
        elif n<l[mid]:
            high=mid-1
        elif n>l[mid]:
            low=mid+1
    return 0

l=list(map(int,input("Enter the data: ").split()))
l.sort()
print("Sorted list is: ",l)
n=int(input("Enter data to search: "))

temp=bsearch(n,0,len(l)-1)
if temp:
    print("Data found at position ",(temp))
else:
    print("Data not found!")