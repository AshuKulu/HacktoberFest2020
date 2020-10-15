arr = [12, 11, 13, 5, 6, 45, 99, 1, 654] # Array to sort

for i in range(len(arr)):
    key = i
    for j in range(i+1, len(items)):
        if arr[key] > arr[j]:
            key = j
        arr[i], arr[key] = arr[key], arr[i]

# print the sorted array
print arr