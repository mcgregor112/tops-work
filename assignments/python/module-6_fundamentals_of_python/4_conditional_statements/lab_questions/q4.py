# q4 - Write a Python program to check if a person is eligible to donate blood using a nested if.

# Answer : 

Age = int(input("Enter your age in (yrs) :"))

if Age >= 18 :
    weight = int(input("Enter your weight in (kg) :"))
    if weight >= 50 :
        print("You're eligible for donate blood")
    else :
        print("You can't donate blood , malnutrition!") 
else :
    print("You're under age ")           




