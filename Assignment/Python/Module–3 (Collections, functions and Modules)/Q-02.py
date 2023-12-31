# Q-02 a) How will you remove last object from a list?

# pop() method: removes the last element from the list
li = [1, 2, 3, 4, 5]
li.pop()
print(li)

# Slicing method: creates a new list excluding the last element
li = [1, 2, 3, 4, 5]
li = li[:-1]
print(li)

# b) Suppose list1 is [2, 33, 222, 14, and 25], what is list1 [-1]?

list1=[2,33,222,14,25]
print(list1[-1]) # output: 25