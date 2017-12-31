/*This program adds data to an existing file, and it creates the file if
    the wrong file name is entered, which isn't supposed to happen.*/

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main ()
{
/*These variables are for the grades to be entered (grade), a string var
    for the name of the file to be appended and a char variable 'cont'
    for the user to enter whether or not they wish to continue entering grades
    or to stop by entering 'n' for "no".*/
	int grade;
	string fileName;
	char cont;

/*Here the user enters the file name to which to add grades.  At this point, just enter
    the name of the file you want to create & the program will create it in the folder
    with this .cpp file.*/
	cout << "Enter a filename:  ";
	getline(cin, fileName);

/*The program opens the file if it exists, the abbreviation 'app' in the command 'ios::app'
    means we wish to 'append' data to the file.  'fileName.c_str()' means to append
    data to the file entered above in the getline statement.  'fileName' is the variable
    for the name of that file.*/
	ofstream outFile(fileName.c_str(), ios::app);

/*Entering a name for a file that doesn't exist causes the program to create that file.  It's supposed
    to exit the program if the file doesn't exist, not create the file, but I don't know this happens.
    If the file does exist then the data that the user enters is added to the end of that file.*/
	if (!outFile)
	{
		cout << "Could not open file." << endl;
		exit(1);
	}

/*Start entering data*/
	do
	{
		cout << "Enter a grade:  ";
		cin >> grade;

/*Write the data to the file*/
		outFile << grade << endl;

/*Ask user if they wish to stop.  Assign 'y' or 'n' to the char variable
    'cont' (for "continue")*/
		cout << "Enter another grade?? (y/n)  ";
		cin >> cont;
	}

/*Keep entering data until the user types 'n'*/
	while (cont == 'y');

/*If they enter 'n' at the prompt, close the file.*/
	outFile.close();
	return 0;
}
