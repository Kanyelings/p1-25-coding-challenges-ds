import array as arr
def function_with_array(arr1,arr2):
  merge=arr.array("i",[])
  merge=arr1 +arr2
  return  merge


item=(input("enter array elements for arr1"))
items=(input("enter array elements for arr2"))
print(function_with_array(item,items))
