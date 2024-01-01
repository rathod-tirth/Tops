# Q-54 How can you pick a random item from a list or tuple?
# Using `random.choice()` from `random` module you can pick random item from a list or tuple

import random

li=[5,10,86,41,25,47,96,12]
tup=(55,12,35,67,454,78,10)

print("Random item form list :",random.choice(li))
print("Random item form tuple :",random.choice(tup))
