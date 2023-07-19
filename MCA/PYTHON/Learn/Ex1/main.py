if __name__ == '__main__':
    N = int(input("Enter Range: "))
    l=[]
    x=[]
    for i in range(N):
        l.append(list(input("Enter Command: ").split()))
    for i in range(N):
        test = l[i][0]
        if test=='insert': 
            x.insert(int(l[i][1]),int(l[i][2]))
        if test=='print':
            print("\nList: ",x)
        if test=='remove':
            x.remove(int(l[i][1]))
        if test=='append':
            x.append(int(l[i][1]))
        if test=='sort':
            x.sort()
        if test=='pop':
            x.pop()
        if test=='reverse':
            x.reverse()