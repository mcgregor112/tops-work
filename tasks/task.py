technologies = [
    "Python",
    "JavaScript",
    "Java",
    "C++",
    "C#",
    "Go",
    "Rust",
    "Swift",
    "Kotlin",
    "Ruby",
    "Swift",
    "Groovy",
    "Kotlin/Native",
    "Rust/Native",
    "Swift/Native",
]

# 1] length, vowels_length, consonent_length, special_symbol_length

# print(not "++".isalnum())

# [
#     ("Python", 6, 1, 5, 0),
#     ("JavaScript", 11, 2, 9, 0),
#     ("Java", 3, 1, 2, 0),
#     ("C++", 2, 1, 1, 1),
#     ("C#", 2, 1, 1, 1),
#     ("Go", 2, 1, 1, 1),
#     ("Rust", 3, 1, 2, 1),
#     ("Swift", 4, 1, 3, 1),
#     ("Kotlin", 4, 1, 3, 1),
#     ("Ruby", 4, 1, 3, 1),
#     ("Swift", 4, 1, 3, 1),
#     ("Groovy", 6, 1, 5, 0),
#     ("Kotlin/Native", 13, 3, 10, 0),
#     ("Rust/Native", 10, 2, 8, 0),
#     ("Swift/Native", 10, 2, 8, 0),
# ]

tp = []

for tech in technologies:
    v = 0
    c = 0
    s = 0
    for ch in tech:
        if ch in "aeiouAEIOU":
            v += 1
        elif not ch in "aeiouAEIOU" and ch.isalpha():
            c += 1
        elif not ch.isalnum():
            s += 1
        continue 
    tp.append((tech, len(tech), v, c, s))

print(tp)    

