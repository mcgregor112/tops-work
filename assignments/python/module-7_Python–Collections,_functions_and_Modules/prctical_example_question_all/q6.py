# # q - Write a Python program to insert elements into an empty list using a for loop and append().

# # Answer :

fruit_num = int(input("Enter how many element you want to insert: "))
fruits = []
for i in range(fruit_num) :
    element = input(f"Enter element {i+1}: ")
    fruits.append(element)
print(fruits)



