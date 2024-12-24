# q - Write a Python program using a for loop to generate the Fibonacci sequence up to 10 terms.

# Answer : 

n = int(input("Enter a number for fibonacci :")) 
a = 0  
b = 1  

for i in range(n):
    print(a, end=" ")  
    temp = a + b  
    a = b        
    b = temp     