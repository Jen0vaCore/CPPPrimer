// Write function that reads and inputs into a file using vectors
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void fileWrite(string filename); // function prototype
void fileRead(const string filename); // function prototype

int main()
{
	cout << "Would you like to write (1) or read (2) file?\n";
	cout << "Choice: ";
	int choice;
	cin >> choice;
	vector<string> vec;
	switch (choice)
	{
	case 1:
		fileWrite("test.txt");
		break;
	case 2:
		fileRead("test.txt");
		break;
	default:
		cout << "Not a valid choice!";
		break;
	}
	return 0;
}

void fileWrite(string filename)
{
	fstream fs;
	string response;
	vector<string> dataToEnter;
	cout << "What would you like to write? One line at a time please (type 'quit' to quit): ";
	while (getline(cin, response) && response != "quit")
	{
		dataToEnter.push_back(response);
	}

	fs.open(filename, fstream::out);
	for (auto iter = dataToEnter.begin(); iter != dataToEnter.end(); ++iter)
	{
		fs << *iter << endl;
	}
	dataToEnter.clear();
	fs.close();
}

void fileRead(const string filename)
{
	fstream fs;
	string line;
	vector<string> linevec;
	fs.open(filename, fstream::in | fstream::app);
	while (getline(fs, line))
		linevec.push_back(line);
	for (auto iter = linevec.begin(); iter != linevec.end(); ++iter)
		cout << *iter << '\n';
	linevec.clear();
	fs.close();
}
