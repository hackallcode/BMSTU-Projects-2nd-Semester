#pragma once

#include "TAnimal.h"

class TProboscidea abstract
	: public TAnimal
{
public:
	const static size_t ClassID = 2; // ID ������

	// ����������
	~TProboscidea() = default;

	// ����������� �� ���������
	TProboscidea();

	// ���������������� �����������
	TProboscidea(const std::string & name, size_t adultAge, size_t deathAge);

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};