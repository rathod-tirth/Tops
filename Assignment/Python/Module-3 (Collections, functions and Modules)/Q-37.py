# Q-37 How Do You Check The Presence Of A Key In A Dictionary?

di1={"a1":55,"a2":64,"a3":89,"b1":12,"b2":24,"b3":74}

key=input("Enter a key : ")

if key in di1:
   print("Key already exists")
else:
   print("New Key detected")

# >> We can check the presence of a key in a dict by using in operator to check whether the key is present of not
