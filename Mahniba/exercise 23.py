def reverse_string(string):
    if(len(string)==1):
        return string
    else:
        return string[1::] + string[0]



character=(input('enter the string\n'))
print(reverse_string(character))