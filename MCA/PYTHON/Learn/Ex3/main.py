"""Www.HackerRank.com → wWW.hACKERrANK.COM
Pythonist 2 → pYTHONIST 2"""
#chr(ord(i)+32) ord() changes char to ascii and chr() changes ascii to char
def swap_case(s):
    list_s=list(s)
    for j,i in enumerate(s):
        if i.isupper():
            list_s[j]=i.lower()
        else:
            list_s[j]=i.upper()
    
    return ''.join(list_s)

if __name__ == '__main__':
    s = "HackerRank.com presents 'Pythonist 2'."
    result = swap_case(s)
    print(result)