# Q-27 Write a Python program to replace last value of tuples in a list

li=[(1,2),(3,4),(5,6),(7,8)]
num=10

for i in range(len(li)):
   li[i]=li[i][0],num
   
print(li)