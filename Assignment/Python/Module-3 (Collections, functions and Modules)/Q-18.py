# Q-18 Write a Python program to split a list into different variables.

li=[3,10,2.5,1.01,"hello","good"]

int_li=[]
float_li=[]
str_li=[]

for i in li:
   if isinstance(i,int):
      int_li.append(i)
   if isinstance(i,float):
      float_li.append(i)
   if isinstance(i,str):
      str_li.append(i)
      
print("Int :",int_li)
print("Float :",float_li)
print("Str :",str_li)