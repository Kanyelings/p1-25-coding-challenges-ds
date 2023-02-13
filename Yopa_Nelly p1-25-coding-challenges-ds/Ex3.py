# multiplication table of 7
min = int(input("enter the a value"))
max = int(input("enter an other value"))
print("the multiplication table of 7 between the two numbers are")
for num in range (min,max+1):
    print(f"7*{num}={7*num}")
else:
    for num in range(max, min + 1):
        print(f"7*{num}={7 * num}")
