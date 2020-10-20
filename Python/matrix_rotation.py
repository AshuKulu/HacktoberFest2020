# Program to rotate the Matrix In Anticlockwise Direction
a = int(input("Enter Index of matrix:-"))
b = []
print("Enter the Matrix Element Rowwise:-")
for i in range(a):
    c = []
    for j in range(a):
        c.append(int(input(f"Enter the {i+1}row {j+1}column Entry:-")))
    b.append(c)


def print_matrix(z):    # This function print the values of list in the list in form of Matrix
    for i in range(len(z)):
        for j in range(len(z)):
            print(z[i][j], end=" ")
        print()


def transpose(c):       # This function change the original Matrix to its Transpose
    for i in range(len(c)):
        for j in range(i, len(c)):
            c[i][j], c[j][i] = c[j][i], c[i][j]


def reverse_columns(a):     # This Function reverse the columns of the matrix
    for i in range(len(a)):
        k = len(a)-1
        for j in range(len(a)):
            a[j][i], a[k][i] = a[k][i], a[j][i]


print("Original Matrix:-")
print_matrix(b)
transpose(b)
reverse_columns(b)
print("Matrix after rotation(Anticlockwise):-")
print_matrix(b)
