N=int(input('Enter No. of books: '))
Earning=[0]*N #creates a list that contains N elements containing the number '0'
Cost=[0]*N # '*' is used here as a repetation  operator which is repeating the single element of the list N times to get a list containing N elements all of which are '0'
sum=0

print('Enter Earning for each book: ')
for i in range(N):
    Earning[i]=int(input())

print('Enter Cost for each book: ')
for i in range(N):
    Cost[i]=int(input())
    sum+=Earning[i]-Cost[i]

print("Minimum Borrowed amount from parents: ",abs(sum))
