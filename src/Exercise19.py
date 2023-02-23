import array as crazy

def function_to_give_max(n):
    items = crazy.array("i",[])
    for values in range(n + 10):
        if n == 1 or n == 2 or n == 3:
            items.append(values)
        else:
            for things in range(2, values):
                if values % things == 0:
                    break
                elif things == values - 1:
                    items.append(values)
    for elements in items:
        if elements > n:
            return elements

answer = function_to_give_max(15)
print(answer)

#this grives the first prime number greater than n base on the assumption that the difference between 2 prime numbers is never greater than 10









