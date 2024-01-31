# Q-10 Write a Python program to count the frequency of words in a file.

file=open('readfile.txt','r')

read=file.read()
words=read.split()
di={}

for i in words:
   di[i]=words.count(i)

print(di)
file.close()