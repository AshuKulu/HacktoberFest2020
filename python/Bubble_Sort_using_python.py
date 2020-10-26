def bubbleSort(arr):
    for passnum in range(len(arr) - 1, 0, -1):
        for i in range(passnum):
            if arr[i] > arr[i + 1]:
                temp = arr[i]
                arr[i] = arr[i + 1]
                arr[i + 1] = temp


n = int(input("Give range of list of numbers"))
array1 = []
for _ in range(n):
    array1.append(input("input a number"))

bubbleSort(array1)
print(array1)
