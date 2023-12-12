# Q-13 Write a Python program to count the number of characters (character frequency) in a string

string=input("Enter string: ")
char={}

for i in string:
    if i in char:
        char[i]+=1
    else:
        char[i]=1

print("Character in String =",char)
