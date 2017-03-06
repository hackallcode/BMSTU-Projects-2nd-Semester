#pragma once

#include "TCarnivora.h"

const std::string TigrisNames[3] = { "Izobel", "Julia", "Ronald" };

class TTigris
	: public TCarnivora
{
public:
	const static size_t ClassID = 32; // ID ������

	// ����������
	~TTigris() = default;

	// ����������� �� ���������
	TTigris();

	// ���������������� ����������
	TTigris(const std::string & name);

	// ���������������� �����������
	virtual TTigris * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;

};