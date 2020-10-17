#calculate and return sum of all elements of a list
def sumList(p,sum = 0):
    le = len(p)
    if le==0:
        return sum
    else:
        sum = sum+p[le-1]
        p.pop()
        return sumList(p,sum)
    

l = eval(input("Enter the list: "))
p = sumList(l)
print(p)
