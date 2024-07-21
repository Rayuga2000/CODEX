#remove vowels from a given stringing

string=input('Enter stringing: ')
vowels='aeiouAEIOU'

new_string=''.join([char for char in string if char not in vowels])

print('New stringing is: ',new_string)