# Right rotate an array


def rotate(l, n):
    return l[-n:] + l[:-n]


lst = [1, 2, 3, 4, 5, 6, 7]
print(rotate(lst, 1))