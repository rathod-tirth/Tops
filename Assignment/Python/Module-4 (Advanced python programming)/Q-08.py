# Q-08 Write a python program to find the longest words.

file=open('readfile.txt','r')

words=file.read().split()

long=""
for i in words:
   if len(long)<len(i):
      long=i

print("Longest words :",long)

file.close()