# Q-05 Write a Python program to read last n lines of a file.

n=3

file=open('readfile.txt','r')

read=file.readlines()[-n:]

for line in read:
   print(line,end="")

file.close()