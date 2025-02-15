# q - Write a Python program to match a word in a string using re.match().

# Answer -

import re

def match_word(word, text):
    pattern = rf"^{word}" 
    match = re.match(pattern, text)    
    if match:
        print(f"Match found: {match.group()}")
    else:
        print("No match found")

text = "Hello, My name is Krishna Sharma"
match_word("Krishna", text)