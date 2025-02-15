# q - Write a Python program to demonstrate handling multiple exceptions.

# Answer - 

try:
    file = open("test1.txt", "r")
    num = int(input("Enter a number: "))
    print(10 / num)
except FileNotFoundError:
    print("Error: File not found.")
except ZeroDivisionError:
    print("Error: Division by zero.")
except ValueError:
    print("Error: Invalid input.")
