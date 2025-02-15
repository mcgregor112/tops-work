# q - Write a Python program to show multilevel inheritance.

# Answer -

class Grandparent:
    def display(self):
        print("Grandparent class")

class Parent(Grandparent):
    pass

class Child(Parent):
    pass

obj = Child()
obj.display()
