#include"car.h"
#include <iostream>

int main()
{
	//Car* pCar = nullptr;
	//pCar = new Car();
	std::unique_ptr<Car> pCar(new Car());

	pCar->setSpeed(40);
	pCar->drive(1.5);
	pCar->setSpeed(60);
	pCar->drive(2.0);
	std::cout << "���ړ�����:" << pCar->getMigration() << "km" << std::endl;

	//delete pCar;
	std::cout << "�C���X�^���X��������" << std::endl;
	return 0;
}