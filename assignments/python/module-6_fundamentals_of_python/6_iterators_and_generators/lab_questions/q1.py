# q - Write a generator function that generates the first 10 even numbers.

# Answer :

def generator():
    for i in range(1, 20):
        if i % 2 == 0:
            yield i

num = generator()

for i in range(1, 10):
    print(next(num))




