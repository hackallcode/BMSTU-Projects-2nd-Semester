#pragma once

#include "TProboscidea.h"

const std::string ElephasNames[3] = { "Kate", "Mary", "Anna" };

class TElephas
	: public TProboscidea
{
public:
	const static size_t ClassID = 21; // ID ������

	// ����������
	~TElephas() = default;

	// ����������� �� ���������
	TElephas();

	// ���������������� ����������
	TElephas(const std::string & name);

	// ���������������� �����������
	virtual TElephas * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;

};