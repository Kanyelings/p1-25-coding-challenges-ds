def recursive_function(n_number):
    if n_number<=1:
        return n_number
    else:
        return recursive_function(n_number - 1) + recursive_function(n_number - 2)

results = recursive_function(6)
print(results)

#Using a recursive function to find the fibonacci number in the fibonacci sequence with the base condition of the number
#n < = 1


