#include"ambulance.h"
#include<iostream>
using namespace std;

Anbulance::Anbulance() : m_number(119)
{
	cout << "Anbulance�N���X�̃C���X�^���X����" << endl;
}

Anbulance::~Anbulance()
{
	cout << "Anbulance�N���X�̃C���X�^���X����" << endl;
}

void Anbulance::savePeople()
{
	cout << "�ً}�~������" << endl << "�Ăяo����" << m_number << "��" << endl;
}