# q2 - Write a Python program to check if a number is prime using if_else.

# Answer :

num = int(input("Enter a no. :"))

if num <= 1 :
    print(num, "is not prime no.")
elif int(num) == 3:
    print(num,"is a prime no.")
else :
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            print(num, "is not a prime number")
            break
        else:
            print(num, "is a prime number")

