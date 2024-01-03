# Q-55 How can you pick a random item from a range?

import random

range_start=int(input("Enter a num for start of the range : "))   
range_end=int(input("Enter a num for end of the range : "))

random_item=random.choice(range(range_start,range_end))

print("Random item from range :",random_item)
