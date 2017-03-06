#pragma once

#include "TArtiodactyla.h"

class THippopotamus
	: public TArtiodactyla
{
private:
	static const std::string Names[3];
public:
	static const size_t ClassID = 12; // ID ������

	// ����������� �� ���������
	THippopotamus();

	// ���������������� ����������
	THippopotamus(const std::string & name);

	// ���������������� �����������
	virtual THippopotamus * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};