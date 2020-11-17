def selection_sort(arr):
    for i in range(len(arr) - 1):
        min_index, min_value = min(enumerate(arr[i + 1:], start=i + 1), key=lambda t: t[1])
        a[i], a[min_index] = a[min_index], a[i]


if __name__ == '__main__':
    a = [4, 8, 9, 5, 1]
    print("Initial array:", a)

    selection_sort(a)
    print("Sorted array: ", a)
