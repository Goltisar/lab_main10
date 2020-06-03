#pragma once
#include "MatrixBase.h"

class Matrix2D : public MatrixBase
{
public:
	Matrix2D();
	int element(unsigned int i, unsigned int j) const override { return matrix[i][j]; }
	int& element(unsigned int i, unsigned int j) override { return matrix[i][j]; }
private:
	const static int matrix_size = 2;
	int matrix[matrix_size][matrix_size];
};