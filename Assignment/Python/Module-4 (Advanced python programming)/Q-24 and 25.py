# Q-24 Write a Python class named Circle constructed by a radius and two methods which will 
# compute the area and the perimeter of a circle

class Circle:
   def __init__(self,r):
      self.r=r

   def area(self):
      return 3.141*self.r**2

   def perimeter(self):
      return 2*3.141*self.r
   
radius=int(input("Enter Radius : "))

circle=Circle(radius)

print("Area of the circle :",circle.area())
print("Perimeter of the circle :",circle.perimeter())