# Q-17 Write a Python program to check whether a list contains a sub list

li=[3,9,10,[12,15,27],30,53,79]

for i in li:
   if isinstance(i,list):
      print("List contains subList")
      break