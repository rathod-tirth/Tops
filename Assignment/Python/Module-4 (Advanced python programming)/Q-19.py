# Q-19 How Do You Handle Exceptions With Try/Except/Finally In Python? Explain with coding snippets.

'''
   - To handle an Exception with Try/Excepty/Finally block.
   - Give Try block the code that might raise an exception.
   - If there is an exception the except block is triggered.
   - And the finally block is executed everytime
'''

try:
   num=input("Enter num : ")
   num=int(num)
   print("Your Number :",num)
except ValueError as ve:
   print(f"Error : {ve}")
finally:
   print("Thank You for using our Program")
   
'''
   Here, try block might raise an valueError so we provide an ValueError except block to handle the exception.
   And the finally block is executed regardless of exception being found or not.
'''