# q - Write a Python program to show hybrid inheritance.

# Answer -

class A:
    def methodA(self):
        print("Method from Class A")

class B(A):
    def methodB(self):
        print("Method from Class B")

class C(A):
    def methodC(self):
        print("Method from Class C")

class D(B, C):
    def methodD(self):
        print("Method from Class D")

obj = D()
obj.methodA()
obj.methodB()
obj.methodC()
obj.methodD()
