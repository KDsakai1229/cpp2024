#include <iostream>
#include "bird.h"
#include "crow.h"
#include "chicken.h"
using namespace std;

int main()
{
	Bird* pBiad1{}, * pBiad2{};
	pBiad1 = new Crow();
	pBiad2 = new Chicken();

	pBiad1->fly();
	pBiad2->fly();
	pBiad1->sing();
	pBiad2->sing();

	delete pBiad1;
	delete pBiad2;

	return 0;
}