# Q-47 Write a Python program to combine values in python list of dictionaries.

li=[{"item":"item1","amount":400},{"item":"item2","amount":300},{"item":"item3","amount":750}]
di={}

for i in li:
   di[i["item"]]=i["amount"]
   
print("Combine Values in dict :",di)
