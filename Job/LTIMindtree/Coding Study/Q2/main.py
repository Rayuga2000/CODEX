#remove vowels from a given stringing

string=input('Enter stringing: ')
vowels='aeiouAEIOU'

for i in [char for char in string if char in vowels]:
    new_string=string.replace(i,'')

print('New stringing is: ',new_string)