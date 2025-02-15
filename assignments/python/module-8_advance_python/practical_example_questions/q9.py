# q - Write a Python program to handle file exceptions and use the finally block for closing the file.

# Answer -

try:
    file = open("q9.txt", "r")
    print(file.read())
except FileNotFoundError:
    print("Error: File not found.")
finally:
    if 'file' in locals():
        file.close()
        print("File closed.")
