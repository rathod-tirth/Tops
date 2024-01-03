# Q-28 Write a Python program to find the repeated items of a tuple.

tup=(1,2,5,5,3,10,3,1)
rep_item=[]
new_li=[]

for i in tup:
   if i not in new_li:
      new_li.append(i)
   else:
      rep_item.append(i)

print("Repeated Items :",rep_item)