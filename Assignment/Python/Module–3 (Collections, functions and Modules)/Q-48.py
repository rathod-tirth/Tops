# Q-48 Write a Python program to create a dictionary from a string.

string="Hello have a nice day"
di={}

for i in string:
   di[i]=string.count(i)
   
print(di)
   