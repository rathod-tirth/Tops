# Q-21 Write a Python function to reverses a string if its length is a multiple of 4.

string=input("Enter string: ")

print("String length:",len(string))

if(len(string)%4==0):
    print("Reverse String:",string[::-1])
