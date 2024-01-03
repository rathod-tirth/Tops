# Q-33 Write a Python script to sort (ascending and descending) a dictionary by value.

di={1:55,
    2:22,
    3:71,
    4:12,
    5:93}

asc=dict(sorted(di.items(), key=lambda x:x[1]))
desc=dict(sorted(di.items(), key=lambda x:x[1], reverse=True))

print("Ascending Order : ",asc)
print("Descending Order : ",desc)

'''
>> Sorted:
   - sorted(list, key=..., reverse=...)
   - key: accepts a function that takes an individual element from the iterable and returns a sorting criteria.
   
>> Here key is used to custom sort, where we call an lambda function to shorten the code.
>> "x" access the individual element of dict which is tuple
>> since its a tuple x[1] represents the values() of the dict and that is our sorting criteria
'''