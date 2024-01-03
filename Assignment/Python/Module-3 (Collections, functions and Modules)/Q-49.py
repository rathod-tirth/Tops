# Q-49 Write a Python function to calculate the factorial of a number (a non-negative integer)

def fact(num):
   result=1
   for i in range(1,num+1):
      result*=i
   return result

num=int(input("Enter a num for factorial : "))
print("Factorial :",fact(num))