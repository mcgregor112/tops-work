# - Count total words in string
# - Count char how many times occur add in a dictionary with case insensitive

# Python Tech

# {
#     'p':1,
#     'y':1,
#     't':2,
#     'h':2,
#     'o':1,
#     'n':1,
#     'i':1,
# }


name = input("Enter a string :")
counter = {}

for n in name :
    n_lower = n.lower()
    counter[n_lower] = counter.get(n_lower , 0)+1
print(counter)    