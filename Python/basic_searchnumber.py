l=[]
print("Total number elements you want to add:")
t=int(input())
print("input elements:")

for j in range(0,t):
    p=int(input())
    l.append(p) 
print("Unsorted list is:")        
print(l)  
print("Sorted list is:")
l.sort()
print(l)
print("Enter the number you want to find index of :")
n=int(input())
if n in l:
  print("number is at index:")
  print(l.index(n))
else:
    print("element does not exits")
