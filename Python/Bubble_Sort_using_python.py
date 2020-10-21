def bubbleSort(arr):
    for i in range(len(arr)): 
        for j in range(0, n-i-1): 
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j]                 
                
n=int(input("Give range of list of numbers"))
arr=[]
for i in range(n):
    arr.append(input("input a number"))

bubbleSort(arr)
print(arr)
