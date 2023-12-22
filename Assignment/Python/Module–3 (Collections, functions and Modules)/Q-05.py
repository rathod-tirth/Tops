# Q-05 Write a Python function to get the largest number, smallest num and sum of all from a list.

li=[]
total=0

for i in range(5):
    num= int(input("Enter a Number : "))
    total+=num
    li.append(num)

li.sort()
small=li[0]
large=li[-1]

print("Smallest Number :",small)
print("Largest Number :",large)
print("Sum :",total)
