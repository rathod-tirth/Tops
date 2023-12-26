# Q-12 Write a Python function that takes a list and returns a new list with unique elements of the first list.

li=[1,2,2,5,1,3,5,8,10,6,1]
new_li=[]

for i in li:
   if i not in new_li:
      new_li.append(i)

print("New list :",new_li)