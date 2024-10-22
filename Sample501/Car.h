#pragma once

class Car
{
public:
	
	Car();
	virtual ~Car();
	double getMigration();
	void setSpeed(double speed);
	void drive(double hour);
	
private:

	double m_migration;
	double m_speed;

};