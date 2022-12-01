#Binary search using recursion

def bsearch(n,low,high):
    if low<=high:
        mid=(low+high)//2
        if n==l[mid]:
            return mid+1
        elif n<l[mid]:
            return bsearch(n,low,mid-1)
        elif n>l[mid]:
            return bsearch(n,mid+1,high)
    else:
        return False

l=list(map(int,input("Enter the data: ").split()))
l.sort()
print("Sorted list is: ",l)
n=int(input("Enter data to search: "))

temp=bsearch(n,0,len(l)-1)
if temp:
    print("Data found at position ",temp)
else:
    print("Data not found!")