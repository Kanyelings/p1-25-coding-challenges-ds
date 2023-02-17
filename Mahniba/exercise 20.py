import  array as arr
value=arr.array("i",[2,4,6,8,10])
keep=value[0]
value.append(keep)
value.remove(value[0])
print(value)