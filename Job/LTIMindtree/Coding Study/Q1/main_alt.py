N=int(input('Enter No. of books: '))
Earning=[]
Cost=[]
sum=0

print('Enter Earning for each book: ')
for i in range(N):
    Earning.append(int(input()))

print('Enter Cost for each book: ')
for i in range(N):
    Cost.append(int(input()))
    sum+=Earning[i]-Cost[i]

print("Minimum Borrowed amount from parents: ",abs(sum))
