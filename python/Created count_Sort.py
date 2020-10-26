print("counting Sort")
print("Range of input")
n = int(input())
list_1 = []
print("Total elements:")
t = int(input())
print("input elements:")

for j in range(0, t):
    p = int(input())
    if p > n:
        print("out of bounds")
    else:
        list_1.append(p)
print("Unsorted list is:")
print(list_1)
print("Sorted list is:")
list_1.sort()
print(list_1)
