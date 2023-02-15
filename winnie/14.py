fib_seq = []
fib_0 = 0;  fib_seq.append(fib_0)
fib_1 = 1;  fib_seq.append(fib_1)
for i in range (2,10):
    fib_seq.append(fib_seq[i-1] + fib_seq[i-2])
print(fib_seq)