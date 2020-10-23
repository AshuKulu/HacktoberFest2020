def bubbleSort(arr):
    """
    Method to buble sort array
    """
    for passnum in range(len(arr) - 1, 0, -1):
        for i in range(passnum):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                

if __name__ == "__main__":
    n = int(input("Give range of list of numbers:"))
    arr = []
    for i in range(n):
        arr.append(input("Input a number:"))

    bubbleSort(arr)
    print(arr)
