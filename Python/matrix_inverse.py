# Program to Calculate the Multiplicative inverse of A Square Matrix
import numpy


def print_matrix(z):
    for i in range(len(z)):
        for j in range(len(z)):
            print(z[i][j], end=" ")
        print()


r = int(input("Enter Number of Rows Of Matrix :-"))
c = int(input("Enter Number of Columns of Matrix :-"))
a = []
for i in range(r):
    b = []
    for j in range(c):
        b.append(int(input(f"Enter a[{i+1}{j+1}] element of Matrix :-")))
    a.append(b)
for i in range(r):
    for j in range(c):
        print(a[i][j], end="\t")
    print()
g = numpy.linalg.det(a)
print(f"Determinant of Entered Matrix is {g}")
if g == 0:
    print("Inverse of Matrix whose determinant is zero is not possible.")
else:
    s = numpy.linalg.inv(a)
    print_matrix(s)
