"""
Consider the string str="Global Warming"
Write statements in python to implement the following
a)To display the last four characters.
b)To display the substring starting from index 4 and ending at index 8.
c)To check whether string has alphanumeric characters or not.
d)To trim the last four characters from the string.
e)To trim the first four characters from the string.
f) To display the starting index for the substring 'Wa'
8) To change the case of the given string.
h) To check if the string is in title case.
i) To replace all the occurrences of letter "a” in the string with ‘*’
"""
str="Global Warming"

print("Last four characters of string are:",str[-4:])
print("The substring from index 4 to 8 is:",str[4:9])
print(("String is not Alphanumeric","String is Alphanumeric")[str.isalnum()])
print("after trimming the last four characters from the string:",str[:-4])
print("after trimming the first four characters from the string",str[4:])
print("starting index for the substring 'Wa':",str.find("Wa"))
print("After changing the case of the string:",str.swapcase())
print(str)
print(("The string is not in title case","The string is in title case")[str.istitle()])
print("After replacing all the occurrences of letter 'a' in the string with ‘*’:",str.replace('a','*'))