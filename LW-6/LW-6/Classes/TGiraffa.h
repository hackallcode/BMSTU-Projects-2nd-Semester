#pragma once

#include "TArtiodactyla.h"

const std::string GiraffaNames[3] = { "Tom", "Billy", "Mark" };

class TGiraffa
	: public TArtiodactyla
{
public:
	const static size_t ClassID = 11; // ID ������

	// ����������
	~TGiraffa() = default;

	// ����������� �� ���������
	TGiraffa();

	// ���������������� ����������
	TGiraffa(const std::string & name);

	// ���������������� �����������
	virtual TGiraffa * MakeChild() override;

	// �������� � ��������� �����
	virtual void Live(std::ostream & stream, float time) override;

};