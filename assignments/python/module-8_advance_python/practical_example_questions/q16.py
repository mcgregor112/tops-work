# q - Write a Python program to show hierarchical inheritance.

# Answer -

class Parent:
    def display(self):
        print("Parent class")

class Child1(Parent):
    pass

class Child2(Parent):
    pass

obj1 = Child1()
obj2 = Child2()
obj1.display()
obj2.display()
