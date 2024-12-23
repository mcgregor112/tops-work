# q - Write a Python program that uses reduce() to find the product of a list of numbers.

# Answer :

from functools import reduce
numbers = [1, 2, 3, 4, 5]
product = reduce(lambda x, y: x * y, numbers)

print("Product of the numbers:", product)
numbers = [1, 2, 3, 4, 5]
product = reduce(lambda x, y: x * y, numbers)

print("Product of the numbers:", product)





