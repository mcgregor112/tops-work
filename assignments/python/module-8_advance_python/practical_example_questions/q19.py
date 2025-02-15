# q - Write a Python program to show method overloading.

# Answer -

class Example:
    def add(self, a=None, b=None, c=None):
        if c is not None:
            return a + b + c
        elif b is not None:
            return a + b
        else:
            return a

obj = Example()
print(obj.add(5, 10))
print(obj.add(5, 10, 15))
