Number = int(input("Enter a Number: "))
Sum = 0

while(Number > 0):
    Reminder = Number % 10
    Sum = Sum + Reminder
    Number = Number //10

print("Sum of the digits is:  ",Sum)