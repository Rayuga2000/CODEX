"""
WAP that repeatedly asks the user to enter product names and prices.
Store all of them in a dictionary whose keys are product names and values
are prices. And also write a code to search an item from the dictionary.
"""
products={}
while(True):
  choice=int(input("\n1) Enter Product details\n2) Search\n3) Quit\nEnter a choice: "))
  match choice:
    case 1:
      n=int(input("\nEnter Total no. of Products: "))
      for i in range(n):
        name=input("\nEnter Product Name: ")
        products[name]=int(input("Enter the Price: "))
      print("\ndictionary created: ",products)
    case 2:
        name=input("Enter Name of product: ")
        if name in products:
            print(name+":"+str(products[name]))
        else:
            print("Product is not present in dictionary")
    case 3:
      print("\nBye Bye!")
      break