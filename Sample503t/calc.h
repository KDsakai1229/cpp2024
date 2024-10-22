#pragma once
#include <string>
using namespace std;

class Calc
{
public:

	Calc();
	Calc(int a, int b);
	int add();
	template <typename T>
	T add(T a , T b)
	{
		return a + b;
	}
	int getA();
	int getB();

private:

	int m_a, m_b;

};