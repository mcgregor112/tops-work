# q - Write a Python program to count how many times each character appears in a string.

# Answer :

name = input("Enter a string :")
counter = {}

for n in name :
    n_lower = n.lower()
    counter[n_lower] = counter.get(n_lower , 0)+1
print(counter)





