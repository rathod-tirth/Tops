# Q-09 Write a Python program to count the number of lines in a text file.

file=open('readfile.txt','r')

read=file.readlines()
print("Number of lines in file :",len(read))

file.close()