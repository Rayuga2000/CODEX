# Count no. of appearences of a sub-string in a String i.e: cdcdcdc => 'cdc' count = 3
s=input('Enter String: ')
r=input("Enter Sub-String: ")

c=0
i=0
j=len(r)

while(j<=len(s)):
    if r==s[i:j]:
        c+=1
    i+=1
    j+=1

print('Count: ',c)