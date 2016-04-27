// Multiply each element in vector by 2 using iterators
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec1 = { 5, 2, 5, 21, 45, 76, 19, 39, 55, 14 };
	cout << "Your vector ccurrently contains: ";
	for (auto iter = vec1.begin(); iter != vec1.end(); ++iter)
		cout << *iter << " ";
	cout << "\nMultiplying each element by two...\n";
	for (auto iter = vec1.begin(); iter != vec1.end(); ++iter)
		cout << *iter * 2 << " ";

	cin.get();
}
