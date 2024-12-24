# q - Write a Python program to add a new element to a list.

# Answer :

num = [1,2,3,4,5,6]
new_num = int(input("Enter a number you want to add :"))
num.extend([new_num])
print(num)
