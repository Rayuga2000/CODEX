#Linear Search using list
l=list(map(int,input("Enter the data: ").split()))
temp=int(input("Enter data to search: "))
c=0
i=0

while(i<len(l)):
  if l[i]==temp:
    print("Data found at position "+str(i+1))
    c+=1
  i+=1

if c==0:
  print("Data not found")