#Convert Time into Minutes
def convert(h,m):
    return int(h)*60+int(m)

h,m=input("Enter Time: ").split()
print("Total Minutes: ",convert(h,m))