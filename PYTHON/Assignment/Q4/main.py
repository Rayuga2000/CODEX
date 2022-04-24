"""
   Create a list containing names of 5 Students:
   1)print the list
   2)ask user for 1 name and input it in the list
   3)print the list
   4)ask user for an index.print the name in that index
   5)add "Kamal" and "Sanjana" at the beginning of the list
   6)print the list
   7)ask user for a name.if the name is in the list remove it if not append it
   8)create a copy of the list in reverse order
   9)print both original and reversed list
   10)remove the last element of the list
"""
l=list(input("Enter the Names: ").split())
print("The list is:",l)

l.append(input("Enter another Name: "))
print("The new List is:",l)

print("The Name in the Index is:",l[int(input("Enter the Index: "))])

temp=["Kamal","Sanjana"]
l=temp+l
print("\nNew list after adding two new Names:",l)

name=input("Enter a Name to find/remove: ")
if name in l:
    l.remove(name)
else:
    l.append(name)

l1=l[-1::-1]
print("\nOriginal list:",l)
print("Reverse list:",l1)

l.remove(l[-1])
print("\nNew List after removing last element:",l)
