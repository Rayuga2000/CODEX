"""WAF that takes 2 sorted lists and merges them(The lists may not be of same length)"""

def merge():
    i=0;j=0;l3=[]

    l1=list(map(int,input("Enter 1st list: ").split()))
    l2=list(map(int,input("Enter 2nd list: ").split()))

    while i<len(l1) and j<len(l2):
        if(l1[i]<l2[j]):
            l3.append(l1[i])
            i=i+1
        elif(l2[j]<l1[i]):
            l3.append(l2[j])
            j=j+1
        else:
            l3.append(l2[j])
            l3.append(l2[j])
            i=i+1
            j=j+1

    while i<len(l1):
        l3.append(l1[i])
        i=i+1
    while j<len(l2):
        l3.append(l2[j])
        j=j+1

    print("The Merged list is:",l3)

merge()