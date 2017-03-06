#pragma once

#include "TCarnivora.h"

class TTigris
	: public TCarnivora
{
private:
	static const std::string Names[3];
public:
	const static size_t ClassID = 32; // ID ������

	// ����������� �� ���������
	TTigris();

	// ���������������� ����������
	TTigris(const std::string & name);

	// ���������������� �����������
	virtual TTigris * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};