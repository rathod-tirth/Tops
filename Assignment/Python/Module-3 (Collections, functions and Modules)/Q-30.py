# Q-30 Write a Python program to unzip a list of tuples into individual lists.

li=[(1,2),(3,4),(5,6),(7,8)]

li1,li2=zip(*li)

print("Unziped Tuples :",li1,li2)