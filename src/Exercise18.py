for Pnumbers in range(100):
   # print(f"crazy{Pnumbers}")
    if Pnumbers == 1 or Pnumbers == 2 or Pnumbers == 3:
        print(Pnumbers)
        continue
    else:
        for divisor in range(2, Pnumbers):
            if Pnumbers % divisor == 0:
                break
            elif(divisor == Pnumbers - 1):
                print(Pnumbers)

#P numbers means prime numbers and the first if statement
#prints the first 3 prime numbers wich i find it difficult to compute
#from there, i used another for loop with divisor to loop and divied through breaking when division succeds