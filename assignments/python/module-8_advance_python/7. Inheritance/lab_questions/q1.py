# q - Write Python programs to demonstrate different types of inheritance (single, multiple, multilevel, etc.).

# Answer - 


# 1. single inheritance :
class Animal:
    def speak(self):
        print("Animal speaks")

class Dog(Animal):
    def bark(self):
        print("Dog barks")

dog = Dog()
dog.speak()  
dog.bark()   


# 2. multiple inheritance :

class Father:
    def father(self):
        return "Father's traits"

class Mother:
    def mother(self):
        return "Mother's traits"

class Child(Father, Mother):
    def child(self):
        return "Child inherits from both"

child = Child()
print(child.father()) 
print(child.mother()) 
print(child.child())  

# 3. multilevel inheritance :

class Grandparent:
    def grandparent(self):
        return "Grandparent's property"

class Parent(Grandparent):
    def parent(self):
        return "Parent's property"

class Child(Parent):
    def child(self):
        return "Child inherits property from Parent and Grandparent"

child = Child()
print(child.grandparent())  
print(child.parent())      
print(child.child())       
