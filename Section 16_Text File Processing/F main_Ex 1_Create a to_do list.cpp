#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string fileName = "todo.txt";

int menu()
{

	int choice;
	cout << "0.  Exit the program" << endl;
	cout << "1.  Display the to-do list." << endl;
	cout << "2.  Add item to to-do list" << endl;
	cout << "Enter a choice:  ";
	cin >> choice;
	return choice;
}
void showList()
{
	string line;
	ifstream inFile(fileName.c_str(), ios::in);
	if(!inFile)
	{
		cout << "File not found. " << endl;
		exit(1);
	}
	getline(inFile, line);
	while (!inFile.eof())
	{
		cout << line << endl;
		getline(inFile, line);
	}
	inFile.close();
	cout << endl << endl << endl;
}
void addItem()
{
	cin.clear();
	cin.sync();
	ofstream outFile(fileName.c_str(), ios::app);
	string item;
	cout << "Enter an item:  ";
	getline(cin, item);
	if (!outFile)
	{
		cout << "File not found." << endl;
		exit(1);
	}
	outFile << item << endl;
	outFile.close();
	cout << endl;
}

int main()

{
	int choice;
	while(choice != 0)
	{
        choice = menu();
        switch(choice)
        {
		case 1:
			showList();
			break;
		case 2:
			addItem();
			break;
		case 0:
			break;
		default:
			cout << "Don't recognize input. " << endl;
        }
	}
	return 0;
}
