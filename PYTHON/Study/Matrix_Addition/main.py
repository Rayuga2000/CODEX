#Matrix addition with user input
l1=[]
l2=[]
l=[[],[],[]]

print("Enter the 1st Matrix:")
#take the inputs as a list and append the whole list as an element to another list iteratively
for i in range(3):
    l1.append(input().split())

print("Enter the 2nd Matrix:")
for i in range(3):
    l2.append(input().split())

print("The first matrix is:")
for i in range(3):
    print(l1[i])

print("The second matrix is:")
for i in range(3):
    print(l2[i])

print("The addition matrix is:")
for i in range(3):
    for j in range(3):
        l[i].append(int(l1[i][j])+int(l2[i][j]))

for i in range(3):
    print(l[i])