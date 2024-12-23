# q - Write a Python program that filters out even numbers using the filter() function.

# Answer :

list1 = [1,2,3,4,5,6,7,8,9,10]
even_no = filter(lambda x: x % 2 != 0, list1)
even_no_list = list(even_no)
print(even_no_list)




