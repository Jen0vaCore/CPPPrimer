// Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string myStr;
	cout << "Enter a string with punctuation: ";
	getline(cin, myStr);
	for (auto &c : myStr)
	{
		if (!ispunct(c))
			cout << c;
	}
	cin.get();
	return 0;
}
