#WAP to give max and min rainfall in a weekday from 2 lists
w=list(input('Enter weeks: ').split())
r=list(map(int,input("Enter rainfall amount: ").split()))

min=0
for i in range(1,len(r)):
    if r[min]>r[i]:
        min=i

max=0
for i in range(1,len(r)):
    if r[max]<r[i]:
        max=i

print("Min Rainfall: ",w[min],"=",r[min],"\nMax Rainfall: ",w[max],"=",r[max])