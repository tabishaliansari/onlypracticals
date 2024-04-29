def Bubblesort(arr):
    size=len(arr)
    swapped = False
    for i in range(size-1):
        for j in range(size-i-1):
            if (l[j]>l[j+1]):
                temp = l[j]
                l[j] = l[j+1]
                l[j+1] = temp
    if not swapped:
        return

l=[]
size=int(input("Enter the size or the number of elements you want: "))
print("Enter the elements of the list: ")
for i in range(size):
    print("Enter element ",i+1,": ",end="")
    l.append(int(input()))

print("List(before sorting): ",l)

Bubblesort(l)

print("Sorted array is:")
for i in range(len(l)):
    print("% d" % l[i], end=" ")
