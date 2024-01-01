# Q-45 Write a Python program to create and display all combinations of letters, selecting each letter from a different key in a dictionary.

di={'1': ['a','b'], '2': ['c','d'], '3':['e','f'], '4':['g','h']}

key=list(di.keys())

for i in range(len(key)-1): # loop for di
   for j in range(len(di[key[i]])): # loop for fist letter ex. "ac ad" so a is the first letter
      for m in range(len(key)-i-1): # loop for iterating over other keys
         for k in range(len(di[key[i+1]])): # loop for second letter ex. "ac ad" here 'c' and 'd' are second letter
            print(di[key[i]][j]+di[key[i+m+1]][k],end=" ")

'''
>> First we assign the keys in a key variable so we can iterate the dict and access the precceding keys by just incrementing
>> now the first loop iterates over the dict keys so we can access the values
>> the second loop iterates over the elements of dict values and its for the first letter of the combination
>> third loop iterates over other keys and make sure the combination is created with every values
   - without third loop: ac ad bc bd ce cf...
   - with third loop: ac ad ae af ag ah bc...
>> fourth loop is for second letter of the combination and similar to the first letter it also iterates over element of dict but the preceding one
'''
