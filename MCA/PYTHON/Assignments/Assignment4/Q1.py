#Data insertion, deletion and searching using lists

choice=1
l=[]

while(choice>0):
    print("\n1) Enter\n2) Search\n3) Delete\n4) Quit")
    choice=int(input("Enter a Choice: "))
    match choice:
        case 1:
            temp=input("Enter Data: ")
            if temp in l:
                print("Data already Added")
            else:
                l.append(temp)
                print("Data Added")
        case 2:
            if len(l)!=0:
                temp=input("Enter Data to Search: ")
                i=0
                while(i<len(l)):
                    if l[i]==temp:
                        print("Data found at position "+str(i+1))
                        break
                    i+=1
                if i==len(l):
                    print("Data not Found!")
            else:
                print("Data not Found!")
        case 3:
            temp=input("Enter Data to Delete: ")
            if temp in l:
                l.remove(temp)
                print("Data Deleted")
            else:
                print("Data not Added/Deleted!")
        case 4:
            print("Bye Bye ;)")
            break
                