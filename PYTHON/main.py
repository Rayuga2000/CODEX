def isLeap(year):
    leap=False

    if year%100==0:
        if year%400==0:
            leap=True
    elif year%4==0:
        leap=True

    return leap

year=int(input("Enter the Year:"))
if(isLeap(year)):
    print("The year is a Leap Year")
else:
    print("The year is not a Leap Year")