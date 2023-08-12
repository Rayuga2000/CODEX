"""from a string 'helloWorldMyselfTushar' print the words in the string seperately.
First word has all its letters lowercase all other words start from a capital letter.
Also change the output case.i.e-> helloWorldMyselfTushar => HELLO wORLD mYSELF tUSHAR"""

string='helloWorldMyselfTushar'
string=string.swapcase()

x=0
for i,j in enumerate(string):
    if j.islower():
        print(string[x:i]) #printing a sliced string from x to index of the lowercase letter
        x=i #storing the lowercase letter for future use
print(string[x:]) #printing the last word using the index of the recent lowercase letter