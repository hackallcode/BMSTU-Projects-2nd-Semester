#pragma once

#include "TCarnivora.h"

class TLeo
	: public TCarnivora
{
private:
	static const std::string Names[3];
public:
	const static size_t ClassID = 31; // ID ������

	// ����������� �� ���������
	TLeo();

	// ���������������� ����������
	TLeo(const std::string & name);

	// ���������������� �����������
	virtual TLeo * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};