#include <iostream>
#include <vector>
using namespace std;

void compare(int& max, int& min, int data)
{
	if (max < data)
	{
		max = data;
	}
	if (min > data)
	{
		min = data;
	}
}

int main()
{
	vector<int> vec{ 20,11,9,33,40,25 };
	int max, min;

	max = min = vec[0];

	for (int i = 1; i < vec.size(); i++)
	{
		if (max < vec[i])
		{
			max = vec[i];
		}
		if (min > vec[i])
		{
			min = vec[i];
		}
	}

	cout << "MAX:" << max << "  MIN:" << min << endl;


	max = min = vec[0];

	for (auto itr = vec.begin(); itr != vec.end(); itr++)
	{
		compare(max, min, *itr);
	}

	cout << "MAX:" << max << "  MIN:" << min << endl;


	max = min = vec.front();

	for (auto d : vec)
	{
		compare(max, min, d);
	}

	cout << "MAX:" << max << "  MIN:" << min << endl;
}