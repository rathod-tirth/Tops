# Q-19 Write a Python program to find the first appearance of the substring 'not' and 'poor' from a given string,
# if 'not' follows the 'poor', replace the whole 'not'...'poor' substring with 'good'. Return the resulting string.

string=input("Enter string: ")
string=string.casefold()

inot=string.find("not")
ipoor=string.find("poor")

if(inot+4==ipoor):
    string=string[:inot]+"good"+string[ipoor+4:]

print("New string:",string)
    
