# Q-17 Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string.

'''

str1=cat
str2=dog

result=dat cog

'''

str1=input("Enter string: ")
str2=input("Enter string: ")
        
result= str2[:1]+str1[1:]+" "+str1[:1]+str2[1:]

print("Concate of strings with first character swap:",result)
