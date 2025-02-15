# q - Write a Python program to show method overriding.

# Answer -

class Parent:
    def show(self):
        print("This is the Parent class")

class Child(Parent):
    def show(self):
        print("This is the Child class")

obj = Child()
obj.show()
