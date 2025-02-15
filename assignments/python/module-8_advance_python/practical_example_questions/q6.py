# q - Write a Python program to check the current position of the file cursor using tell().

# Answer -

with open("q6.txt", "r") as file:
    print("Current cursor position:", file.tell())
    file.read(5)
    print("Cursor position after reading 5 characters:", file.tell())
