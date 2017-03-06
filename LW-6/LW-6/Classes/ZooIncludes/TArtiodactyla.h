#pragma once

#include "TAnimal.h"

class TArtiodactyla abstract
	: public TAnimal
{
public:
	const static size_t ClassID = 1; // ID ������
	
	// ����������� �� ���������
	TArtiodactyla();

	// ���������������� �����������
	TArtiodactyla(const std::string & name, size_t adultAge, size_t deathAge);

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};