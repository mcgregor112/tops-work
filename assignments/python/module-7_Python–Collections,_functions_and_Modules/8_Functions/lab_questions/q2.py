# q - Write a Python program to create a calculator using functions.

# Answer :

def calculator(num1, num2, choose):
    if choose == '+':
        print(f"Your Answer is : {num1 + num2}")
    elif choose == '-':
        print(f"Your Answer is : {num1 - num2}") 
    elif choose == '*':
        print(f"Your Answer is : {num1 * num2}")
    elif choose == '/':
        if num2 != 0:
            print(f"Your Answer is : {num1 / num2}")
        else:
            print("Error: Division by zero is not allowed.")
    else:
        print("Invalid Operation!")

choose = input("Enter an operation you want to perform (+, -, *, /) : ")
num1 = int(input("Enter num1 : "))
num2 = int(input("Enter num2 : "))

calculator(num1, num2, choose)


    






