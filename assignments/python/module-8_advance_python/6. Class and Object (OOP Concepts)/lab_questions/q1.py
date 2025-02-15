# q - Write a Python program to create a class and access its properties using an object.

# Answer - 

class Car:
    def __init__(self, brand, model, year):
        self.brand = brand
        self.model = model
        self.year = year

    def display_info(self):
        print(f"Car: {self.brand} {self.model}, Year: {self.year}")

my_car = Car("Toyota", "Corolla", 2022)

print("Brand:", my_car.brand)
print("Model:", my_car.model)
print("Year:", my_car.year)
my_car.display_info()
