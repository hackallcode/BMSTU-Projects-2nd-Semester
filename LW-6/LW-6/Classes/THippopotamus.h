#pragma once

#include "TArtiodactyla.h"

const std::string HippopotamusNames[3] = { "Greg", "Fiona", "Jennifer" };

class THippopotamus
	: public TArtiodactyla
{
public:
	const static size_t ClassID = 12; // ID ������

	// ����������
	~THippopotamus() = default;

	// ����������� �� ���������
	THippopotamus();

	// ���������������� ����������
	THippopotamus(const std::string & name);

	// ���������������� �����������
	virtual THippopotamus * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;

};