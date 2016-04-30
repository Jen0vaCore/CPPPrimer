// Write a program to copy elements from a list<int> into two deques. The even-valued elements should go into one deque and the odd ones into the other.
#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main()
{
	list<int> intList = { 2, 4, 6, 8, 11, 13, 12, 18, 19, 23, 21, 10 };
	deque<int> oddNum;
	deque<int> evenNum;

	for (auto iter = intList.begin(); iter != intList.end(); ++iter)
		if ((*iter % 2) == 0)
			evenNum.push_back(*iter);
		else
			oddNum.push_back(*iter);

	for (auto i : oddNum)
		cout << i << " ";
	cout << endl;
	for (auto i : evenNum)
		cout << i << " ";

	cin.get();
	return 0;
}
