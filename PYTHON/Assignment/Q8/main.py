"""WAP to input 10 names and ph no. to store in a dictioanary and to input any name and to print the ph no. of
the particular name"""

PhoneBook=dict()

for i in range(10):
    name=input("Enter the name:")
    PhoneBook[name]=int(input("Enter the Number:"))

print(PhoneBook)