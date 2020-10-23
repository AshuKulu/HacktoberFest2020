def mergesort(a):
    #split the list into two
    if len(a) > 1:
        mid = len(a)//2
        # split recursively
        left = a[:mid]
        right = a[mid:]
        #recursive portion
        mergesort(left)
        mergesort(right)
        i = 0
        j = 0
        k = 0

        while i < len(left):
            a[k]=left[i]
            i += 1
            k += 1


        while j < len(right):
            a[k] = right[j]
            j += 1
            k += 1

items = [9,2,3,6,7,11,10]
print(items)
print(mergesort(items))
print(items)

# You would need to assume that everything is of datatype integer





