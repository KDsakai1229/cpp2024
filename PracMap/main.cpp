#include <map>
#include <vector>
#include <iostream>
using namespace std;

typedef struct
{
	string name;
	int hp, atk, def;
}Enemy;

int main()
{
	vector<Enemy> vEne{ {"Slime",10,5,8},{"Wolf",20,30,1},{"Spider",30,15,5} };
	map<string, Enemy> mapEne;

	for (int i = 0; i < vEne.size(); i++)
	{
		mapEne.emplace(vEne[i].name, vEne[i]);
	}



	return 0;
}