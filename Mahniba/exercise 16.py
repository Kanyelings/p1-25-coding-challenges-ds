def boolean(number):
    if int(number)%2==0:
        return False
    else:
        return True


value=input("enter the number")
print(boolean(value))
