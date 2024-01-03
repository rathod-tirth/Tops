# Q-52 Write a Python function that checks whether a passed string is palindrome or not

def palindrome(strg):
   for i in range(len(strg)):
      if strg[i] != strg[-1*(i+1)]:
         return False
   return True

strg=input("Enter a string : ")

if palindrome(strg):
   print(f"{strg} is palidrome")
else:
   print(f"{strg} is not palidrome")