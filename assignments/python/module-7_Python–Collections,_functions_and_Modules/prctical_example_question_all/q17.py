# q - Write a Python program to convert two lists into one dictionary using a for loop.

# Answer :

fruits = ["custardapple", "apple", "pineapple", "greenapple"]
rate_fruits = [50, 100, 150, 200]
fruit = {}
for i in range(len(fruits)):
    fruit[fruits[i]] = rate_fruits[i]
print(fruit)
    






