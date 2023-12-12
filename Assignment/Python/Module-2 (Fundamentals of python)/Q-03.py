# Q-03: Write a Python program to get the Fibonacci series of given range.

n=int(input("Enter num: "))
a,b=0,1

for i in range(n):
    a,b=b,a+b

print(a)
    
'''
  ↓ this is the fibonacci series, not the summation that we are getting
1=0+1
2=1+1
3=1+2
5=2+3
8=3+5
13=5+8

0,1,1,2,3,5,8,13
'''
