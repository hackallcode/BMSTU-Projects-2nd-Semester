#pragma once

#include "TProboscidea.h"

class TLoxodonta
	: public TProboscidea
{
private:
	static const std::string Names[3];
public:
	const static size_t ClassID = 22; // ID ������

	// ����������� �� ���������
	TLoxodonta();

	// ���������������� ����������
	TLoxodonta(const std::string & name);

	// ���������������� �����������
	virtual TLoxodonta * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};