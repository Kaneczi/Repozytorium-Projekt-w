# This is a sample Python script.
import random


# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.




min_val = 1
max_val = 2
loop = 1
streak = 0
rand = random.randint(min_val, max_val)

while loop == 1:

    guess = int(input(f"guess a number between {min_val} and {max_val}:"))
    if guess == rand:
        print(f"you guessed correctly the number {rand}")
        streak = streak + 1
        rand = random.randint(min_val, max_val)

    else:
        print(f"you did not guess correctly, correct number: {rand}")
        loop = 0

print(f"win streak: {streak}")


# See PyCharm help at https://www.jetbrains.com/help/pycharm/
