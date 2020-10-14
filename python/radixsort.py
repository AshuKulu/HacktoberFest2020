def insertion(a, n, m):
    for i in range(1, len(a)):
        j = i - 1
        while (j >= 0):
            if ((a[j] % n) / m) > ((a[i] % n) / m):
                temp = a[j]
                a[j] = a[i]
                a[i] = temp
            j -= 1
            i -= 1


def radix_sort(a, length):
    n = 10
    m = 1
    for i in range(0, length):
        insertion(a, n, m)
        n = n * 10
        m = m * 10
        print(a)


# main
# Taking the list of numbers and user
li = list()
length_ofDigit = 0
n = int(input("Enter how many numbers you want ot enter: "))
for x in range(0, n):
    num = int(input("enter num:"))
    li.append(num)
    # Taking the len of longest digit (No of steps taken by this sort is equal to length of longest number) 
    if length_ofDigit < len(str(num)):
        length_ofDigit = len(str(num))
# sorting the numbers using the radix sort.        
radix_sort(li, length_ofDigit)
