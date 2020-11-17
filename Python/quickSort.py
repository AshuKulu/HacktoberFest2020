"""
Quick sort using last element as pivot index.
Initial array: [23, 45, 12, 78, 90, 1]
-------------- [1, 45, 12, 78, 90, 23]
-------------- [1, 12, 23, 78, 90, 45]
-------------- [1, 12, 23, 45, 90, 78]
-------------- [1, 12, 23, 45, 78, 90]
Sorted array : [1, 12, 23, 45, 78, 90]
"""


def find_pivot_index(A, start, end):
    pivot = A[end]
    p_index = start
    for iter in range(start, end):
        if A[iter] <= pivot:
            A[p_index], A[iter] = A[iter], A[p_index]
            p_index += 1
    A[p_index], A[end] = pivot, A[p_index]
    return p_index


def quick_sort(A, start, end, debug_print=False):
    if start < end:
        pivot_index = find_pivot_index(A, start, end)
        if debug_print:
            print("--------------", A)
        quick_sort(A, start, pivot_index - 1, debug_print=debug_print)
        quick_sort(A, pivot_index + 1, end, debug_print=debug_print)


if __name__ == '__main__':
    A = []
    n = int(input("Enter how many numbers you want to enter: "))
    for _ in range(n):
        num = int(input("Enter number: "))
        A.append(num)

    print("Initial array:", A)

    quick_sort(A, 0, n - 1, debug_print=True)
    print("Sorted array :", A)
