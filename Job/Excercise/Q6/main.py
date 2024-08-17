# Wrap text into specified height using textwrap module

import textwrap

if __name__ == '__main__':
    string, max_width = input("Enter String: "), int(input("Enter Max_Width: "))
    l=textwrap.wrap(string,max_width)
    print("\n".join(l))