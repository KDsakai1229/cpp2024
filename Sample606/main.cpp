#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> li{ 5,8,2 };

	li.push_back(1);
	li.push_back(2);
	li.push_front(3);

	auto itr = li.begin();
	li.insert(++itr, 4);

	li.sort();
	li.reverse();
	li.unique();
	li.remove(3);

	for (auto d : li)
	{
		cout << d << " ";
	}

	cout << endl;
	return 0;
}