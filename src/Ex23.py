# reverse a string

def ReverseString(s2):
    s1 = ""
    for i in s2:
        s1 = i + s1
    return s1


s2 = input("Enter a string: ")
print(f"The reverse string of {s2} is: ", ReverseString(s2))
