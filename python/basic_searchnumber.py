# Initialization of new list, can also be done by l = list()
list1 = []
t = int(input("Total number elements you want to add:"))
print("input elements:")

for j in range(0, t):
    p = int(input())
    list1.append(p)
print("Unsorted list is:", list1, sep="")
# Permanently sorting the list
list1.sort()
print("Sorted list is:", list1, sep="")
n = int(input("Enter the number you want to find index of :"))
if n in list1:
    print("number is at index:", l.index(n), sep="")
else:
    print("element does not exist")
