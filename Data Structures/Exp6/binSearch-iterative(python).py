def binarySearch(arr, x, low, high):
    while low <= high:

        mid = (high + low)//2

        if arr[mid] == x:
            return mid

        elif arr[mid] < x:
            low = mid + 1

        else:
            high = mid - 1

    return -1


arr = []
print("Enter 10 Numbers (in ascending order):")
for i in range(10):
    arr.insert(i, int(input()))

print("Enter a Number to Search:")
x = int(input())

result = binarySearch(arr, x, 0, len(arr)-1)

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Not found")
