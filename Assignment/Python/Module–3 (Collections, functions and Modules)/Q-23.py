# Q-23 Write a Python program to check whether an element exists within a tuple.

tup=(5,10,15,20,25)

inp=int(input("Enter an number : "))

if inp in tup:
   print("Element exists in the tuple")
else:
   print("Element doesn't exists in the tuple")