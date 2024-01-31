# Q-11 Write a Python program to write a list to a file.

li=[1,2,3,4,5,6,7]

file=open('writefile.txt','w')

string=str(li)
file.write(string)

file.close()