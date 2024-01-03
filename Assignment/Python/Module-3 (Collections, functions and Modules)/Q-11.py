# Q-11 Write a Python program to generate and print a list of first and last 5 elements where the 
# values are square of numbers between 1 and 30.

li=[]

for i in range(1,31):
   li.append(i*i)
   
print(li)

li=li[:5]+li[-5:]
print("Fist and Last 5 elements of square of 1 to 30 :",li)