#pragma once
#include "Car.h"

class Anbulance : public Car
{
public:
	
	Anbulance();
	~Anbulance();
	void savePeople();
	
private:

	int m_number;

};