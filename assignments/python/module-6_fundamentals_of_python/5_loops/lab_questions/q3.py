# q - Practical Example 3: Write a Python program to find a specific string in the list using a simple for loop and if condition. 

# Answer :

fruits = ['apple', 'banana', 'mango']
find = input("enter fruit you want to find :")

for fruit in fruits:
    if fruit == find:
        print(find, "found in list")
        break
else :
    print(find, "sorry can't found ") 
          



