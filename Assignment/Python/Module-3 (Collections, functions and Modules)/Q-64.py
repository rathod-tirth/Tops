# Q-64 Write a Python program to returns sum of all divisors of a number

num=int(input("Enter a number : "))

count=num
for i in range(1,num):
   if num%i == 0:
      count+=i

print(f"Sum of all divisor of {num} : {count}")
