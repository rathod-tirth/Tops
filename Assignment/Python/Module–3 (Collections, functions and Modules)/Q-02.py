# Q-02 How will you remove last object from a list?

# pop() method: removes the last element from the list
li = [1, 2, 3, 4, 5]
li.pop()
print(li)

# Slicing method: creates a new list excluding the last element
li = [1, 2, 3, 4, 5]
li = li[:-1]
print(li)