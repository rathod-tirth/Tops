# Q-07 Write a Python program to read a file line by line store it into a variable.

file=open('readfile.txt','r')

li=file.readlines()
print(li)

file.close()