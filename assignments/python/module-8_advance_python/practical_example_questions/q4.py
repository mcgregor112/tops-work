# q - Write a Python program to create a file and print the string into the file.

# Answer -

q4 = "This is the text written into the file."
with open("output.txt", "w") as file:
    print(q4, file=file)
