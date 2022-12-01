#Data insertion, deletion and searching using dictionary

choice=1
l=[]
phonebook={}

while(choice>0):
    print("\n1) Enter\n2) Search\n3) Delete\n4) Quit")
    choice=int(input("Enter a Choice: "))
    if choice!=4:
        name=input("Enter Name: ")

    match choice:
        case 1:
            phone=input("Enter Phone no.: ")
            if name in phonebook:
                print("Data already exists")
            else:
                phonebook[name]=phone
                print("Data Added")
        case 2:
            if name in phonebook:
                print(name+" : "+phonebook[name])
            else:
                print("Data not Found!")
        case 3:
            if name in phonebook:
                phonebook.pop(name)
                print("Data Deleted")
            else:
                print("Data not Added/Deleted!")
        case 4:
            print("Bye Bye ;)")
            break
                