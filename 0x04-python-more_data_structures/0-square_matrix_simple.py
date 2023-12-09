#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    # new_matrix = matrix.copy()
    new_matrix = [[] * len(matrix[]) for _ in range(len(matrix))]
    for i in range(len(matrix)):
        for j in range(len(matrix[])):
            new_matrix[i][j] = matrix[i][j] ** 2

            return (new_matrix)
