"""
This technique sorts the elements by first dividing the elements into several groups called buckets.
The elements inside each bucket are sorted using any of the suitable sorting algorithms here we used- insertion sort
 then all buckets are merged to give the sorted array

"""


def insertionSort(a):
    for i in range(1, len(a)):
        j = i - 1
        while j >= 0:
            if a[j] > a[i]:
                temp = a[j]
                a[j] = a[i]
                a[i] = temp
            j -= 1
            i -= 1


def bucketsort(arr):
    bucket_list = []
    slot = 10
    # creating empty buckets
    for i in range(10):
        bucket_list.append([])
    sorted_bucket = []
    for element in arr:
        # checking for float type elements 
        if 0.0 <= float(element) <= 1.0:
            index = int(slot * float(element))
            bucket_list[index].append(float(element))
        # checking for int tytpe elements.    
        else:
            index = int(int(element) / 10)
            bucket_list[index].append(int(element))

    for buck in bucket_list:
        insertionSort(buck)
        for i in buck:
            sorted_bucket.append(i)
    print(sorted_bucket)


# main
bucket = [23, 12, 89, 34, 67, 90, 5, 77]
bucketsort(bucket)
