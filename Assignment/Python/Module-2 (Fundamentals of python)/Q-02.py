# Q-02: Write a Python program to get the Factorial number of given number.

num=int(input("Enter num: "))
fact=1

for i in range(1,num+1):
    fact*=i

print(fact)
