# Q-51 Write a Python function to check whether a number is perfect or not.

def perfect_num(num):
   if num<=0:
      return False
   
   count=0
   for i in range(1,num):
      if num%i==0:
         count+=i
   return count==num

num=int(input("Enter a num : "))

if perfect_num(num):
   print(f"{num} is a perfect number")
else:
   print(f"{num} is not a perfect number")
