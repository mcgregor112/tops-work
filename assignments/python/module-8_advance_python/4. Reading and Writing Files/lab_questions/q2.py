# q - Write a Python program to write multiple strings into a file.

# Answer - 

lines = ["First line\n", "Second line\n", "Third line\n"]
with open("multi_lines.txt", "w") as file:
    file.writelines(lines)