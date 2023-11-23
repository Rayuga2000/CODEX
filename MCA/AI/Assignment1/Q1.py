target=list(map(int,input("Enter targets: ").split()))
loc_A=list(map(int,input("\nEnter Locations of A: ").split()))
loc_B=list(map(int,input("Enter Locations of B: ").split()))
energy_A=list(map(int,input("\nEnter Energy of A: ").split()))
energy_B=list(map(int,input("Enter Energy of B: ").split()))

hit_A=0
hit_B=0

for i in target:
    if i in loc_A:
        hit_A+=1
    elif i in loc_B:
        hit_B+=1

print("\nResult: ",-(hit_A*sum(energy_A)-hit_B*sum(energy_B)))