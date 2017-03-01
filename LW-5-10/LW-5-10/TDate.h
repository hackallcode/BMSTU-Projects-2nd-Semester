#pragma once

#include "TTriad.h"

class TDate : public TTriad
{
private:
	// ��������� �����
	virtual void SetFirst(int value);
	virtual void SetSecond(int value);
	virtual void SetThird(int value);

	// ���������� �����
	virtual void IncFirst();
	virtual void IncSecond();
	virtual void IncThird();
public:
	// ����������� �� ���������
	TDate();

	// ���������������� �����������
	TDate(int year, int month, int day);

	// ��������� �����
	void SetYear(int value);
	void SetMonth(int value);
	void SetDay(int value);

	// ���������� �����
	void IncYear();
	void IncMonth();
	void IncDay();

	// �������� ���
	void AddDays(int days);

	// �����
	virtual void Print(std::ostream & stream);
};