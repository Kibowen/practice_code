#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

string = str(number)

last_num = string[-1:]

if last_num == "0":
    print("last digit of", number, "is", last_num, "and is 0")

elif last_num > "5":
    print("last digit of", number, "is", last_num, "and is greater than 5")

elif last_num < "6":
    print("last digit of:", number, "is:", last_num, "and is less than 6 and is not 0")