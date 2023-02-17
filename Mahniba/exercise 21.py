import array as arr
items =arr.array("i",[1,2,6,8,10])
keep=items[-1]
items.remove(items[-1])
items.insert(0, keep)
print(items)