# q - Write Python programs to demonstrate method overloading and method overriding.

# Answer -

# overloading :

class MathOperations:
    def add( a, b=0, c=0):
        return a + b + c

math_op = MathOperations()
print(math_op.add(5, 10, 15))


# overiding :

class Parent:
    def show(self):
        return "This is the Parent class"

class Child(Parent):
    def show(self):
        return "This is the Child class (Overridden method)"

parent = Parent()
child = Child()
print(parent.show())  
print(child.show())   
