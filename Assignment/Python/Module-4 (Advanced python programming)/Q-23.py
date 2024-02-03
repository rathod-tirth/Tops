# Q-23 Write a Python class named Rectangle constructed by a length and width and a method which will 
# compute the area of a rectangle

class Rectangle:
  def area(self):
      l=int(input("Enter Length : "))
      b=int(input("Enter Breadth : "))
      return l*b
  
rectangle=Rectangle()

print("Area of Rectangle :",rectangle.area())