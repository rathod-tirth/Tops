# Q-41 Write a Python program to map two lists into a dictionary

li1=[1,2,3,4,5,6]
li2=[5,10,23,84,32,65]

di=dict(map(lambda x,y:(x,y), li1,li2))

print(di)