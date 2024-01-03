# Q-42 Write a Python program to combine two dictionary adding values for common keys.

d1={"a":100,"b":200,"c":300}
d2={"a":300,"b":200,"d":400}

new_di=d1.copy()

for i in d1:
   if i in d2: # for checking common keys
      d2[i]+=d1[i] # adding
      
new_di.update(d2)
print(new_di)
