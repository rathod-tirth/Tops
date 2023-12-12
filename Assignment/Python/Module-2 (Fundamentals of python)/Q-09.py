# Q-09 Write a Python program to sum of three given integers. However, if two values are equal sum will be zero.

a=int(input("Enter num1: "))
b=int(input("Enter num2: "))
c=int(input("Enter num3: "))
total=0

if(a==b or b==c or c==a):
    total=0
else:
    total=a+b+c

print("Sum of given number =",total)
