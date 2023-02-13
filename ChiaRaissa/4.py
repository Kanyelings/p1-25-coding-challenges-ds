number = int(input("Enter the number of which the user wants to print the multiplication table: "))
# we are using for loop for iterating the multiplication table 10 times
print("The multiplication table of : ", number)
for i in range(1,11):
 print(number, " x ", i, " = ", number*i) 
