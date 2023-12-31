# Q-43 Write a Python program to print all unique values in a dictionary.

di={"a1":12,"a2":64,"a3":89,"b1":12,"b2":24,"b3":64}
new_di={}

for k,v in di.items():
   if v not in new_di.values():
      new_di[k]=v

print(new_di)