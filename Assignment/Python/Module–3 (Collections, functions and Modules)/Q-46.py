# Q-46 Write a Python program to find the highest 3 values in a dictionary

di={"a1":56,"a2":78,"a3":12,"a4":5,"a5":32,"a6":94,"a7":10}

new_di=sorted(di.values(), reverse=True)
print("Three higest values in dict :",new_di[:3])
