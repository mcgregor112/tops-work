# q - Write a Python program to handle multiple exceptions (e.g., file not found, division by zero).

# Answer -

try:
    with open("nonexistent.txt", "r") as file:
        data = file.read()
    print(10 / 0)
except FileNotFoundError:
    print("Error: File not found.")
except ZeroDivisionError:
    print("Error: Division by zero is not allowed.")
