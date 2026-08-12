# Accept an M × N matrix from the user and generate its transposed matrix of size N × M. (Python)

m = int(input("Enter number of rows: "))
n = int(input("Enter number of columns: "))

matrix = []

print("Enter the matrix:")

for i in range(m):
    row = list(map(int, input().split()))
    matrix.append(row)

transpose = []

for j in range(n):
    row = []
    for i in range(m):
        row.append(matrix[i][j])
    transpose.append(row)

print("Transposed matrix:")

for row in transpose:
    print(row)