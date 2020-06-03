#include "Matrix2D.h"

Matrix2D::Matrix2D() : MatrixBase(matrix_size)
{
	for (unsigned int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix[i][j] = i * matrix_size + j + 1;
}