num = []

while len(num) < 5:
    try:
        num1 = int(input(f"Enter number {len(num) + 1}: "))
        num.append(num1)
    except ValueError:
        print("Invalid input! Please enter a valid number.")
    

print("the list of 5 numbers : " , num)

