# Q-05 Write a Python function to get the largest number, smallest num and sum of all from a list.

def list_function():
    li=[]
    total=0

    for i in range(1,6):
        num=int(input(f"Enter Number {i} : "))
        total+=num
        li.append(num)
        
    li.sort()
    small=li[0]
    large=li[-1]
    
    return small,large,total

small,large,total=list_function()

print("Smallest Number :",small)
print("Largest Number :",large)
print("Sum :",total)
