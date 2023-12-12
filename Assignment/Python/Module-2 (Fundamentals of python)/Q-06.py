# Q-06 Write python program that swap two number with temp variable and without temp variable.

# with temp variable

print("With temp variable")
num1=int(input("Enter num: "))
num2=int(input("Enter num: "))
temp=0

print(f"\nBefore Swap: num1={num1} num2={num2}")

temp=num1
num1=num2
num2=temp

print(f"After Swap: num1={num1} num2={num2}")

# without temp variable

print("\nWithout temp variable")
a=int(input("Enter num: "))
b=int(input("Enter num: "))


print(f"\nBefore Swap: a={a} b={b}")

a=a+b
b=a-b
a=a-b

print(f"After Swap: a={a} b={b}")
