#Given an integer, , print the following values for each integer from i to n in perticular order:
    # Decimal
    # Octal
    # Hexadecimal (capitalized)
    # Binary

def print_formatted(number):
    width=len(bin(number)[2:])+1

    for i in range(1,number+1):
        decimal=str(i).rjust(width-1)
        octal=oct(i)[2:].rjust(width)
        hexadecimal=hex(i)[2:].rjust(width).upper()
        binary=bin(i)[2:].rjust(width)

        #print(string.replace('0o','').replace('0X','').replace('0b',''))
        print(decimal+octal+hexadecimal+binary)

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
