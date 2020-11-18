# Write a Program to get transpose of a Matrix and print it in spiral Form

a = int(input("Enter The Number of Rows of Matrix:-"))
b = int(input("Enter The Number of Columns of Matrix:-"))
d = []
for i in range(a):
    e = []
    for j in range(b):
        c = int(input(f"Enter {i+1}{j+1}th Element:-"))
        e.append(c)
    d.append(e)


def spiral_matrix(f):
    k = 0
    t = 0
    m = len(f)
    n = len(f[0])
    while k < m and t < n:
        for i in range(t, n):
            print(f[k][i], end="\t\t")
        k += 1
        for i in range(k, m):
            print(f[i][n-1], end="\t\t")
        n -= 1
        if k < m:
            for i in range(n-1, (t-1), -1):
                print(f[m-1][i], end="\t\t")
        m -= 1
        if t < n:
            for i in range(m-1, k-1, -1):
                print(f[i][t], end="\t\t")
            t += 1


def print_matrix(z):    # This function print the values of list in the list in form of Matrix
    for i in range(len(z)):
        for j in range(len(z[0])):
            print(z[i][j], end="\t\t")
        print()
        print()


def transpose(f):
    u = []
    for w in range(len(f[0])):
        v = []
        for q in range(len(f)):
            v.append(f[q][w])
        u.append(v)
    return u


print("Original Matrix:-")
print_matrix(d)
print("Transposed Matrix:-")
e = transpose(d)
print_matrix(e)
print("Transposed Matrix in Spiral Form:-")
spiral_matrix(e)
