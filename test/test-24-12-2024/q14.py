# q - Write a Python program to merge two dictionaries.

# Answer :
dict1 = {'apple': 100, 'banana': 20}
dict2 = {'blue berry': 30, 'cherry': 40}

merged_dict = {**dict1, **dict2}
print("Merged Dictionary:", merged_dict)
