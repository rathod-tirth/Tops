# Q-04 Write a Python program to read first n lines of a file.

n=int(input("Enter the num of lines you want to show? : "))

file=open('readfile.txt','r')

for i in range(n):
   print(file.readline(),end="")

file.close()