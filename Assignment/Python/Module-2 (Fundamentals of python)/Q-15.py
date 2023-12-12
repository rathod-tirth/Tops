# Q-15 Write a Python program to count occurrences of a substring in a string.

string=input("Enter string: ")
substr=input("Enter substring: ")

count=0

for i in range(len(string)-len(substr)+1):
    if(string[i:i+len(substr)] == substr):
        count+=1

print(f"Occurrences of {substr} in string = {count}")
    

'''
    - loop: first we subtract len of string from substring to stop the loop from going out of context due to the condition below
    - condition: by using slipce we check whether the substring is equal the string
    - splice: splicing is done by adding the len of substr on singel letter splice, so the splice string is len of the substring
    - and then we simply add if the condition is correct
'''
