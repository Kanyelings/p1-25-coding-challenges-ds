import array as FD
def arrays(D1,D2):
    D3=FD.D("i",[])
    for i in D1:
        if i is not D2:
          D3.append(i)
    for i in D2:
        if i not in D1:
            D3.append(i)
            return D3


value=int ("i",[1,5,6])
number=int ("i"[2,7,6])
print(arrays(value,number))