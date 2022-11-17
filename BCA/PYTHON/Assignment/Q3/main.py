"""WAF that takes a list of numbers and returns the cumulative sums in a list"""
def csum():
    l1=[]
    l=list(map(int,input("Enter the Numbers: ").split()))
    for i in range(len(l)):
        l1.append(sum(l[:i+1]))
        
    print("The Cumulative Sums are:",l1)

csum()
