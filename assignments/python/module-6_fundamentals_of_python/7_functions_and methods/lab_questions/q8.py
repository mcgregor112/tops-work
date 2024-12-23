# q - Write a Python program to print a string from the last character.

# Answer - 

def last_name(name):
  last_ch =name[-1::-1]
  print(last_ch)

name = input("Enter a String :")
last_name(name)


