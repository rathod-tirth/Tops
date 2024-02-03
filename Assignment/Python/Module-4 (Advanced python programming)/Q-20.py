# Q-20 Write python program that user to enter only odd numbers, else will raise an exception.

li=[]

try:
   for i in range(5):
      num=int(input("Enter Num : "))
      if num%2==0:
         raise Exception("Number must be odd")
      li.append(num)
except Exception as e:
   print(e)