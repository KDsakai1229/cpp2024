#include"car.h"
#include"ambulance.h"
#include <iostream>

int main()
{
	Car car;
	car.setSpeed(40);
	car.drive(1.5);
	car.drive(2.0);
	std::cout << "‘ˆÚ“®‹——£:" << car.getMigration() << "km" << std::endl;

	Anbulance* pAmb = new Anbulance();
	pAmb->setSpeed(60);
	pAmb->drive(2);
	std::cout << "‘ˆÚ“®‹——£:" << pAmb->getMigration() << "km" << std::endl;
	pAmb->savePeople();
	delete pAmb;

	return 0;
}