#pragma once

#include <iostream>

class TVector 
{
private:
	size_t Length;
	double * Data;
public:
	// ����������
	~TVector();
	
	// ����������� �� ���������
	TVector();

	// ����������� �����������
	TVector(const TVector & rhs);

	// ���������������� ����������
	TVector(const double * const data, const size_t length);

	// �������� ������������
	TVector & operator=(const TVector & rhs);

	// �������� +=
	TVector & operator+=(const double * const data);

	// �������� []
	double operator[](size_t index) const;
	double& operator[](size_t index);
};

// �������� +
TVector operator+(const TVector & a, const double * const b);