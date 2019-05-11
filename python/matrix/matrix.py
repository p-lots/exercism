class Matrix(object):
    def __init__(self, matrix_string):
        self.matrix = []
        for line in matrix_string.split('\n'):
            row = [int(n) for n in line.split(' ')]
            self.matrix.append(row)

    def row(self, index):
        return [self.matrix[index - 1][i] for i in range(len(self.matrix[0]))]

    def column(self, index):
        return [self.matrix[i][index - 1] for i in range(len(self.matrix))]
