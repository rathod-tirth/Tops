# Q-39 Write a Python program to check multiple keys exists in a dictionary

di={"a1":55,"a2":64,"a3":89,"b1":12,"b2":24,"b3":74}

key1=input("Enter key1 : ")
key2=input("Enter key2 : ")

if key1 in di:
   print(f"{key1} already exists")
if key2 in di:
   print(f"{key2} already exists")
else:
   print("New key detected")
