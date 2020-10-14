# Initialization of new list, can also be done by l = list()
l = []
t = int(input("Total number elements you want to add:"))
print("input elements:")

for j in range(0, t):
    p = int(input())
    l.append(p)
print("Unsorted list is:", l, sep="")
l.sort()
print("Sorted list is:", l, sep="")
n = int(input("Enter the number you want to find index of :"))
if n in l:
    print("number is at index:", l.index(n), sep="")
else:
    print("element does not exist")
