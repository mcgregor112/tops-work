# q - Write a Python program to create a class and access the properties of the class using an object.

# Answer -

class Personal_details:
    def __init__(self, name, age):
        self.name = name
        self.age = age

person1 = Personal_details("John", 25)
print(f"Name: {person1.name}, Age: {person1.age}")
