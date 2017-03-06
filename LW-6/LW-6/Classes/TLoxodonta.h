#pragma once

#include "TProboscidea.h"

const std::string LoxodontaNames[3] = { "Ian", "Luk", "Jace" };

class TLoxodonta
	: public TProboscidea
{
public:
	const static size_t ClassID = 22; // ID ������

	// ����������
	~TLoxodonta() = default;

	// ����������� �� ���������
	TLoxodonta();

	// ���������������� ����������
	TLoxodonta(const std::string & name);

	// ���������������� �����������
	virtual TLoxodonta * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;

};