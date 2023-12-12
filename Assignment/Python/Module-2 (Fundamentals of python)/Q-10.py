# Q-10 Write a Python program that will return true if the two given integer values are equal or their sum or difference is 5.

num1=int(input("Enter num: "))
num2=int(input("Enter num: "))
result=False

if(num1==num2 or (num1+num2 == 5 or num1-num2 == 5)):
    result=True
else:
    result=False

print(result)
