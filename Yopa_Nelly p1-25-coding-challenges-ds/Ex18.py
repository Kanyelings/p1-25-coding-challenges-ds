for Num in range(1, 101):
    count = 0
    for i in range(2, (Num // 2 + 1)):
        if Num % i == 0:
            count += 1
            break
    if count == 0 and Num != 1:
        print(" %d\n" % Num)
