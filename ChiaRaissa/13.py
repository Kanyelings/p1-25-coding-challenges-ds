def maxi(arr,n):
    max = arr[0]
    for ar in range(1,n):
        if arr[ar] > max:
            max = arr[ar]
            return max
        arr = ["enter your number here"]
        n = len(arr)
        print(maxi(arr,n))
