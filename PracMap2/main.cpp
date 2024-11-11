#include <iostream>
#include <map>
#include <random>
using namespace std;

int main()
{
	map<string, string> dic{ {"Šˆ“®","activity"},{"•µˆÍ‹C","atmosphere"},{"ŒŒ‰t","blood"},{"ŠÂ‹«","environment"},{"‰·“x","temperature"} };

	auto it = dic.begin();

	cout << "æ“ª—v‘f:" << it->first << endl;

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

	cout << it->first << "‚Ì‰p’PŒê‚Í?" << endl;
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