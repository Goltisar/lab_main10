#include "MatrixBase.h"

void MatrixBase::operator*= (int iMult)
{
	for (unsigned int i = 0; i < m_size; i++)
		for (unsigned int j = 0; j < m_size; j++)
			element(i, j) *= iMult;
}

void MatrixBase::operator+=(MatrixBase& iAdd)
{
	for (unsigned int i = 0; i < m_size; i++)
		for (unsigned int j = 0; j < m_size; j++)
			element(i, j) += iAdd.element(i, j);
}

std::ostream& operator<<(std::ostream& stream, const MatrixBase& iMatrix)
{
	for (unsigned int i = 0; i < iMatrix.size(); i++)
	{
		for (unsigned int j = 0; j < iMatrix.size(); j++)
			stream << iMatrix.element(i, j) << "\t";
		stream << "\n";
	}
	return stream;
}
