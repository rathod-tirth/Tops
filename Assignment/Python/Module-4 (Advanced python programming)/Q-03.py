# Q-03 Write a Python program to append text to a file and display the text.

file=open('writefile.txt','a+')

file.write("How are you doing?\n")
file.write("Have a nice day.")

file.seek(0)

print(file.read())

file.close()