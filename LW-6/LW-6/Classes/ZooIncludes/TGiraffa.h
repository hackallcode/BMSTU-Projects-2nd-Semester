#pragma once

#include "TArtiodactyla.h"

class TGiraffa
	: public TArtiodactyla
{
private:
	static const std::string Names[3];
public:
	static const size_t ClassID = 11; // ID ������

	// ����������� �� ���������
	TGiraffa();

	// ���������������� ����������
	TGiraffa(const std::string & name);

	// ���������������� �����������
	virtual TGiraffa * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;
};