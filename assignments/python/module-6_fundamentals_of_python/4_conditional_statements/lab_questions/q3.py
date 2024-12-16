# q3 - Write a Python program to calculate grades based on percentage using if-else ladder.

# Answer :

Science = int(input("Science :"))
English = int(input("English :"))
Maths = int(input("Maths :"))
Hindi = int(input("Hindi :"))
Social = int(input("Social :"))

total = (Science + English + Maths + Hindi + Social) / 5 
print("Total :", total, "%")

if total >= 90 :
    print("Grade A")
elif total >= 80 :
    print("Grade B")
elif total >= 70 :
    print("Grade C")
elif total >= 60 :
    print("Grade D")        
elif total >= 50 :
    print("Grade E")
elif total >= 40 :
    print("Failed")
else :
    print("Oops ! try again")


    





