def insertion_sort(A):
    # assume that n is an ordered list
    # complexity of O(n^2)
    for j in range(1,len(A)):
        # insert key A[j] into the already sorted sub array A[1....j-1] by pairwise key swaps
        key = A[j]
        position = j
        while position > 0 and  A[position-1]>key:
            #make the pairwise key swaps
            A[position] = A[position-1]
            position -= 1
        A[position]= key



B = [12, 11, 10, 5, 6]
print(insertion_sort(B))
print(B)


