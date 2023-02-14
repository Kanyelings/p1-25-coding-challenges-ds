n = 0
i = 0
while n < 100:
    i = i + 1
    count = 1
    for j in range(2, i):
        if i % j == 0:
            count = 0
            break

    if count == 1:
        print(i, end=' ')
        n = n + 1