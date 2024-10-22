#include "rat.h"
#include <iostream>
using namespace std;

int Rat::s_count = 0;

Rat::Rat()
{
	s_count++;
	m_id = s_count;
}

Rat::~Rat()
{
	cout << "ネズミ:" << m_id << "消去" << endl;
	s_count--;
}

void Rat::showNum()
{
	cout << "現在のネズミの数:" << s_count << "匹" << endl;
}

void Rat::squeak()
{
	cout << m_id << ":チュウ" << endl;
}