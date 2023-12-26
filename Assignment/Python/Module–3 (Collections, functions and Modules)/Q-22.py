# Q-22 Write a Python program to convert a tuple to a string.

tup=(1,5,"Hello","nice",3.14,"day")
str1=""

for i in tup:
   str1+=str(i)
   
print(str1)