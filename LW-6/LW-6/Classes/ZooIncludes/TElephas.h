#pragma once

#include "TProboscidea.h"

class TElephas
	: public TProboscidea
{
private:
	static const std::string Names[3];
public:
	static const size_t ClassID = 21; // ID ������

	// ����������� �� ���������
	TElephas();

	// ���������������� ����������
	TElephas(const std::string & name);

	// ���������������� �����������
	virtual TElephas * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};