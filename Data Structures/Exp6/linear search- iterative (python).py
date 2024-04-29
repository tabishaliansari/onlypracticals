def linearsearch(L, k):
    for i in range(len(L)):
        if L[i]==k:
            return i
    return "does not exist"
n=int(input("Enter the number of elements:"))
L=[int(input(("Enter element %d:")%(i+1)))for i in range(n)]
print("list:",L)
k=int(input("Element to be searched:"))
print("pos of element:",linearsearch(L,k))
