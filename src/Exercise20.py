import array as arr
items = arr.array("i", [1,2,3,4,5,6,6])
keep = items[0]
items.append(keep)
items.remove(items[0])
print(items)

#to shift to the left, i remove the first item in array thereby pushing all indexes 1 unit to the left and adding what i removed to the end ot array
