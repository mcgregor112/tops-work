# q - Write a Python program to search for a word in a string using re.search().
    
# Answer -    

import re

def search_word(text, word):
    pattern = rf'\b{re.escape(word)}\b'
    match = re.search(pattern, text, re.IGNORECASE)

    if match:
        print(f"Word '{word}' found at position {match.start()} in the string.")
    else:
        print(f"Word '{word}' not found in the string.")

text = "My name is Krishna Sharma . I am training python language at TOPS Technology"
word = input("Enter the word to search: ")
search_word(text, word)
