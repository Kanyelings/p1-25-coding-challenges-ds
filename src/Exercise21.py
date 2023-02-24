import array as arr
items = arr.array("i", [1,2,3,4,5,6,6])
keep = items[-1]
items.remove(items[-1])
items.insert(0, keep)
print(items)

#The array is items, now with the insert function, it shifts every element to the right which is whats expected


