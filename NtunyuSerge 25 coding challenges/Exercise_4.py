# Print all the multiplication tables with numbers from 1 to 10
for i in range(1, 11):
    print("\n")
    for j in range(1, 13):
        print("{} * {} = {}".format(i, j, i*j))
