# Q-23 Write a Python function to insert a string in the middle of a string.

str1=input("Enter main string: ")
str2=input("Enter string you want to insert: ")

mid=int(len(str1)/2)

str1=str1[:mid]+str2+str1[mid:]

print("New String:",str1)
