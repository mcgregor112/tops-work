# q - Write a Python program to merge two lists into one dictionary using a loop.

# Answer :

list1 = [1, 2, 3, 4, 5]
list2 = ['a', 'b', 'c', 'd', 'e']
dict1 = {}
for i in range(len(list1)):
    dict1[list1[i]] = list2[i]
    print(dict1)    





