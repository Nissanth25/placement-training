def transpose_matrix(mat):
    return list(map(list, zip(*mat)))
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print(transpose_matrix(mat))
