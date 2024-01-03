# Q-29 Write a Python program to remove an empty tuple(s) from a list of tuples

li=[(1,2),(),(5,6),(7,8),(),(9,10),()]

for i in li:
   if len(i)==0:
      li.remove(i)

print(li)