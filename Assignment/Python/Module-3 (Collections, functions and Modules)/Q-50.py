# Q-50 Write a Python function to check whether a number is in a given range

def check_range(num,start,end):
   if start<=num<=end:
      print("Your num is in range")
   else:
      print("Your num is out of range")

range_start=int(input("Enter a num for start of the range : "))   
range_end=int(input("Enter a num for end of the range : "))   
num=int(input("Enter a num : "))

check_range(num,range_start,range_end)
