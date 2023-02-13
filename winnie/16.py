n = int(input("enter the number to be check :\t"))

def prime(n):
    flag = False
    if(n<0):
        print("negative integers can not be prime")
    elif(n<=1):
        print(n,"is not a prime number")
    elif n>1:
        for i in range (2,n):
            if (n % i) == 0:
                flag = True; break
        if flag:
            print(n,"is not a prime number")
        else:
            print(n,"is a prime number")
prime(n)