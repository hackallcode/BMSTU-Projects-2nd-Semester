#pragma once

#include <iostream>

class TTriad
{
protected:
	int First;
	int Second;
	int Third;
public:
	// ����������� �� ���������
	TTriad();

	// ���������������� �����������
	TTriad(int first, int second, int third);

	// ��������� �����
	int GetFirst();
	int GetSecond();
	int GetThird();

	// ��������� �����
	virtual void SetFirst(int value);
	virtual void SetSecond(int value);
	virtual void SetThird(int value);

	// ���������� �����
	virtual void IncFirst();
	virtual void IncSecond();
	virtual void IncThird();

	// ������� ������
	virtual void Print(std::ostream & stream);
};