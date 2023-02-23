file=open('t.txt','w+')
file.write("hello world!!!")
for i in file:
    print(i)
print(file.read())
file.close()