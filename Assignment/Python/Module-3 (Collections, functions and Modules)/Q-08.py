# Q-08 Write a Python program to remove duplicates from a list.

li=[1,2,2,5,1,3,5,8,10,6,1]
new_li=[]

for i in li:
   if i not in new_li:
      new_li.append(i)

print("New list :",new_li)