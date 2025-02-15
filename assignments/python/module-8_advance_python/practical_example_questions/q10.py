# q - Write a Python program to print custom exceptions.

# Answer -

class CustomError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

try:
    raise CustomError("This is a custom exception!")
except CustomError as e:
    print("Caught an exception:", e)
