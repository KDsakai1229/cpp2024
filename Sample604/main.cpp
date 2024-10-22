#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> v1{ 10,9,8 };
	vector<string> v2;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v2.push_back("ABC");
	v2.push_back("DEF");
	v1.pop_back();
	v1.emplace_back(4);

	auto itr = v1.begin();

	for (int i = 0; i < v1.size(); i++)
	{
		cout << "v1[" << i << "]=" << v1[i] << endl;
	}

	v2.pop_back();
	v2.emplace_back("G");

	for (int i = 0; i < v2.size(); i++)
	{
		cout << "v2[" << i << "]=" << v2[i] << endl;
	}

	return 0;
}