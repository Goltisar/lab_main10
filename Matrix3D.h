#pragma once
#include "MatrixBase.h"

class Matrix3D : public MatrixBase
{
public:
	Matrix3D();
	int element(unsigned int i, unsigned int j) const override { return matrix[i][j]; }
	int& element(unsigned int i, unsigned int j) override { return matrix[i][j]; }
private:
	const static int matrix_size = 3;
	int matrix[matrix_size][matrix_size];
};