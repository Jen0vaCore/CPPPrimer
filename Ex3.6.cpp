// Use a range for to change all the characters in a string to X.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string myStr;
	cout << "Please enter a string: ";
	getline(cin, myStr);
	cout << "Converting sentence to the letter X...\n";
	for (auto &c : myStr)
		c = 'X';
	cout << myStr;
	cin.get();
	return 0;
}
