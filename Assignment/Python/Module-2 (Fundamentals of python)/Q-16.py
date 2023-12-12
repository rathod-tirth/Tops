# Q-16 Write a Python program to count the occurrences of each word in a given sentence

string=input("Enter string: ")
word=string.split(" ")

obj={}
count=0

for i in word:
    count=word.count(i)
    obj[i]=count

print(obj)
