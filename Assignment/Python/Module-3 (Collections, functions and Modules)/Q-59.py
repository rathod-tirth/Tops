# Q-59 Write a Python program to read a random line from a file.
import random

file=open("Q-59.txt","r")
line=file.readlines()

random_line=random.choice(line).strip() # strip for removing whitespaces

print("Radom Line :",random_line)