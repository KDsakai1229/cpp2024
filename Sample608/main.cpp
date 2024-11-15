#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int>score{};
	score["Tom"] = 100;
	score["Bob"] = 80;
	score["Mike"] = 76;

	score.insert(make_pair("John", 88));
	score.emplace("David", 90);

	cout << "Tomの点数:" << score["Tom"] << endl;
	cout << "Bobの点数:" << score["Bob"] << endl;
	cout << "Mikeの点数:" << score["Mike"] << endl;

	//for (auto d : score)
	//{
	//	cout << "Key:" << d.first << " Value:" << d.second << endl;
	//}

	for (const auto [key, value] : score)
	{
		cout << "Key:" << key << " Value:" << value << endl;
	}

	return 0;
}