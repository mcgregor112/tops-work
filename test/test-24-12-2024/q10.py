# q - Write a function in Python to calculate the factorial of a number.

# Anser :

n = int(input("Enter a number: "))
factorial = 1

for i in range(1, n + 1):
    factorial *= i
print(f"The factorial of {n} is {factorial}")


