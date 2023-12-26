# Q-10 Write a Python function that takes two lists and returns true if they have at least one common member.

def common_mem(li1,li2):
   for i in li1:
      if i in li2:
         return True
   return False
   
li1=[5,10,15,25,30]
li2=[3,6,9,12,15]

if common_mem(li1,li2):
   print("They have a common member")
else:
   print("They don't have a common member")