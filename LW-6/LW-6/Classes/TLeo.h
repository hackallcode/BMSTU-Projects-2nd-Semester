#pragma once

#include "TCarnivora.h"

const std::string LeoNames[3] = { "Kristofer", "Frenk", "Debby" };

class TLeo
	: public TCarnivora
{
public:
	const static size_t ClassID = 31; // ID ������

	// ����������
	~TLeo() = default;

	// ����������� �� ���������
	TLeo();

	// ���������������� ����������
	TLeo(const std::string & name);

	// ���������������� �����������
	virtual TLeo * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;

};