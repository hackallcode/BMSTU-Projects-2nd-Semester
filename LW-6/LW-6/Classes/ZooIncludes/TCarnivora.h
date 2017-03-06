#pragma once

#include "TAnimal.h"

class TCarnivora abstract
	: public TAnimal
{
public:
	const static size_t ClassID = 3; // ID ������

	// ����������� �� ���������
	TCarnivora();

	// ���������������� �����������
	TCarnivora(const std::string & name, size_t adultAge, size_t deathAge);

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};