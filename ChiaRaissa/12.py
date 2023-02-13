def maximum(array, n):
    positive_numbers = []
    for i in range(n):
        if array[i]>0:
            positive_numbers.append(array[i])
            return positive_numbers
        array = [i for i in range(-5,5)]
        n = len(array)
        print(maxin(array, n))
