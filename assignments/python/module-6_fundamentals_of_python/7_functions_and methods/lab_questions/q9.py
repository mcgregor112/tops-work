# q - Write a Python program to print every alternate character from the string starting from index 1.

# Answer - 

def alternate(string):
  alt_ch = string[1::2]
  print(alt_ch)

string = input("Enter a String :")
alternate(string)