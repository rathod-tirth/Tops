# Q-63 Write a Python program to calculate surface volume and area of a cylinder
# area formula: pi x r^2 x h
# volume formula: 2 x pi x r x h + 2 x pi x r^2

radius=float(input("Enter radius : "))
height=float(input("Enter height : "))

pi=3.1415
volume=round(pi*radius**2*height,4)
area=round(2*pi*radius*height+2*pi*radius**2,4)

print("Volume of cylinder :",volume)
print("Area of cylinder :",area)