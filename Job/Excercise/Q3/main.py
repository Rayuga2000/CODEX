# Insert python variables inside a string
def print_full_name(first, last):
   print("\nHello %s %s! You just delved into python." %(first,last)) # using %(modulus) operator

if __name__ == '__main__':
    first_name = input("Enter First Name: ")
    last_name = input("Enter Last Name: ")
    print_full_name(first_name, last_name)

# Reference -> https://builtin.com/articles/python-variable-in-string