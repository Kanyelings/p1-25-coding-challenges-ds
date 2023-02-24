def extend_2(a, b):
    c = a
    c.extend(b)
    print(a)
    print(b)
    for i in a:
        if i in b:
            while c.count(i) != 0:
                c.remove(i)
                return c
            print(extend_2([3, 5, 8, 4],[4, 3, 7, 10]))
