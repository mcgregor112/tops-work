# q - Write a Python program to demonstrate the use of super() in inheritance.

# Answer -

class Parent:
    def __init__(self):
        print("Parent class constructor")

class Child(Parent):
    def __init__(self):
        super().__init__()
        print("Child class constructor")

obj = Child()
