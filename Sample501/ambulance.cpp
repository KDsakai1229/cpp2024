#include"ambulance.h"
#include<iostream>
using namespace std;

Anbulance::Anbulance() : m_number(119)
{
	cout << "Anbulanceクラスのインスタンス生成" << endl;
}

Anbulance::~Anbulance()
{
	cout << "Anbulanceクラスのインスタンス消去" << endl;
}

void Anbulance::savePeople()
{
	cout << "緊急救命活動" << endl << "呼び出しは" << m_number << "番" << endl;
}