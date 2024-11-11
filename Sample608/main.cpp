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

	cout << "Tom‚Ì“_”:" << score["Tom"] << endl;
	cout << "Bob‚Ì“_”:" << score["Bob"] << endl;
	cout << "Mike‚Ì“_”:" << score["Mike"] << endl;

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