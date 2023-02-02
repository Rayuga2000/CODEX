def bSearch(low,high,n):
  global l
  

  while low<high:
    mid=(low+high)//2
    if l[mid]==n:
      return mid+1
    elif n>l[mid]:
      low=mid+1
    elif n<l[mid]:
      high=mid-1
  return -1

#sort
def BSort():
  global l
  n=len(l)

  for i in range(n-1):
    for j in range(n-i-1):
      if l[j]>l[j+1]:
        l[j],l[j+1]=l[j+1],l[j]
  print(l)

l=[6,8,1,2,9,8,0,3]

BSort()

x=bSearch(0,len(l)-1,2)

if x>=0:
  print("Data found at position: ",x)
else:
  print("Data not Found!")