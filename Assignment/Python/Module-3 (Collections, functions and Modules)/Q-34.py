# Q-34 Write a Python script to concatenate following dictionaries to create a new one.

di1={"a1":55,"a2":64,"a3":89}
di2={"b1":12,"b2":24,"b3":74}

new_di= di1.copy() # copying the di1, so any changes to the di1 won't reflect on new_di
new_di.update(di2)

print("Concatenated Dict :",new_di)