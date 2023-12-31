# Q-35 Write a Python script to check if a given key already exists in a dictionary.

di1={"a1":55,"a2":64,"a3":89,"b1":12,"b2":24,"b3":74}

key=input("Enter a key : ")

if key in di1:
   print("Key already exists")
else:
   print("New Key detected")
