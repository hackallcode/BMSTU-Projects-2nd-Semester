#pragma once

#include "TCar.h"

class TBus : public TCar
{
protected:
	size_t MaxPassengers;
public:
	// ����������� �� ���������
	TBus() : TCar(), MaxPassengers(0) 
	{}

	// ���������������� ����������
	TBus(const std::string & model, size_t maxVelocity, size_t maxPassengers) : TCar(model, maxVelocity), MaxPassengers(maxPassengers) 
	{}

	// ������� ������ ���������� � �����
	virtual void Print(std::ostream & stream)
	{
		TCar::Print(stream);
		stream << "Max count of passengers: " << MaxPassengers << std::endl;
	}
};