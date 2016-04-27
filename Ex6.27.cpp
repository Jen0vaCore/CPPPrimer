// Write a function that takes an initializer_list<int> and produces the sum of the elements in the list.
#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> il);

int main()
{
	cout << sum({ 1, 6, 10, 5, 11 });
	cin.get();
	return 0;
}

int sum(initializer_list<int> il)
{
	int added = 0;
	for (auto elem : il)
	{
		added += elem;
	}
	return added;
}
