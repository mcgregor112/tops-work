# q - Write a Python program to show single inheritance.

# Answer -

class Parent:
    def show(self):
        print("This is the Parent class")

class Child(Parent):
    pass

obj = Child()
obj.show()
