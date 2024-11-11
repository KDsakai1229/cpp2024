#include <iostream>
#include <map>
#include <random>
using namespace std;

int main()
{
	map<string, string> dic{ {"����","activity"},{"���͋C","atmosphere"},{"���t","blood"},{"��","environment"},{"���x","temperature"} };

	auto it = dic.begin();

	cout << "�擪�v�f:" << it->first << endl;

	//for (it = dic.begin(); it != dic.end(); it++)
	//{
	//	cout << it->first << endl;
	//}

	for (auto p : dic)
	{
		cout << p.first << endl;
	}

	random_device rand_dev{};
	mt19937 rand_engine(rand_dev());
	uniform_int_distribution<int> dist(0, dic.size() - 1);

	//cout << dist(rand_engine);

	it = dic.begin();
	it = next(it, dist(rand_engine));

	cout << it->first << "�̉p�P���?" << endl;
	string input;
	cin >> input;
	if (input == it->second)
	{
		cout << "Correct!" << endl;
	}
	else
	{
		cout << "incorrect..." << endl;
	}

	return 0;
}