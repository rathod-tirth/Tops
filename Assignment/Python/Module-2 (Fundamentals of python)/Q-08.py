# Q-08 Write a Python program to test whether a passed letter is a vowel or not.

char=input("Enter char: ").casefold()

if(char in 'aeiou'):
    print("Character is vowel")
else:
    print("Character is consonant")
