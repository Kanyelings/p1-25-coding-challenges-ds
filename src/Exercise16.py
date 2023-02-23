def fuction_return_bolean(number):
    if number >= - 3 and number <= 3:
         return True
    else:
        for figures in range(1, int(number/2)):
            if number % (figures + 1) == 0:
                return False
                break
            else:
                return  True

#Below is the test
final = fuction_return_bolean(5)
if final:
    print("true")
else:
    print("false")