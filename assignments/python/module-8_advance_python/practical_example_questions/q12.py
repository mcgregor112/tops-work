# q - Write a Python program to demonstrate the use of local and global variables in a class.

# Answer -

global_var = "I am a Krishna Sharma"

class q12:
    def display(self):
        local_var = "I am a local"
        print(local_var)
        print(global_var)

obj = q12()
obj.display()
