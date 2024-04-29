arr=[]

size=int(input("Enter the no. of elements you want to add in array: "))
for i in range(size):
    print("Enter element ",i+1,": ",end="")
    arr.append(int(input()))
print("Unsorted Array: ",end="")
print(arr)
for step in range(1,size):
    k=arr[step]
    j=step-1

    while j>=0 and k<arr[j]:
        arr[j+1]=arr[j]
        j=j-1

    arr[j+1]=k

print("Sorted array is:")
for i in range(len(arr)):
	print ("% d" % arr[i],end=" ")



