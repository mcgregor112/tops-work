# q - Write a Python program to show multiple inheritance.

# Answer -

class ClassA:
    def methodA(self):
        print("Method from ClassA")

class ClassB:
    def methodB(self):
        print("Method from ClassB")

class Child(ClassA, ClassB):
    pass

obj = Child()
obj.methodA()
obj.methodB()
