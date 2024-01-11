# Q-06 Write a Python program to read a file line by line and store it into a list

file=open('readfile.txt','r')

li=file.readlines()
print(li)

file.close()