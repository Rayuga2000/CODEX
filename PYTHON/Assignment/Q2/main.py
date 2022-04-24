"""WAF to find all duplicates in a list"""

def circle(l):
    l1=[]
    for i in l:
        if(l.count(i)>1):
            if(l1.count(i)<1):
                l1.append(i)
    
    print("The Duplicates are:",l1)

circle(list(map(int,input("Enter the Numbers:").split())))

            

