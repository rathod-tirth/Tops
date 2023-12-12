# Q-20 Write a Python function that takes a list of words and returns the length of the longest one.

li=[]

for i in range(5):
    word=input("Enter word: ")
    li.append(word)

count=["",0]

for i in li:
    if(len(i)>count[1]):
        count[1]=len(i)
        count[0]=i

print(f"Longest word = {count[0]}")
print(f"Length of the Longest word = {count[1]}")
