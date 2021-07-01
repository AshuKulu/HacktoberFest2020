# Optimized bubble sort in python


def bubbleSort(array):
    
    # Run loops two times: one for walking throught the array
    # and the other for comparison
    for i in range(len(array)):
        
        # swapped keeps track of swapping
        swapped = True
        for j in range(0, len(array) - i - 1):

            # To sort in descending order, change > to < in this line.
            if array[j] > array[j + 1]:

                # Swap if greater is at the rear position
                (array[j], array[j + 1]) = (array[j + 1], array[j])
                swapped = False
                
        # If there is not swapping in the last swap, then the array is already sorted.
        if swapped:
            break


data = [-2, 45, 0, 11, -9]
bubbleSort(data)
print('Sorted Array in Ascending Order:')
print(data)
