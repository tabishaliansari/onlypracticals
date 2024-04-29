def linear_search(arr, size, key):

    if (size == 0):
        return -1

    elif (arr[size - 1] == key):
        return size - 1
    
    return linear_search(arr, size - 1, key)

n=int(input("Enter the number of elements:"))
L=[int(input(("Enter element %d:")%(i+1)))for i in range(n)]
print("list:",L)
k=int(input("Element to be searched:"))
print("pos of element:",linear_search(L,n,k))
