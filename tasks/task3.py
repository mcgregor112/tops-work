# wn = randome_number_generate
# gn = from user

# gn < wn - too low
# gn > wn - too high
# gn == wn - congrats, you are win after attempt {times}


import random

wn = random.randint(1, 10000)
times = 0

while True:
    gn = int(input("Guess a number between 1 and 10000: "))
    times += 1
    
    if gn < wn:
        print("Too low! Try again.")
    elif gn > wn:
        print("Too high! Try again.")
    else:
        print(f"Congrats, you win after {times} attempts!")
        break


