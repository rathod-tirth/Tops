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

