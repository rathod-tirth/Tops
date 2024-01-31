# Q-12 Write a Python program to copy the contents of a file to another file.

with open('readfile.txt','r') as file:
   readfile=file.read()

with open('writefile.txt','w') as file:
   file.write(readfile)