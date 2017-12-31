#include <iostream>
#include <fstream>
#include <cstdlib>

/*This program covers Reading data FROM a file.
The standard library, cstdlib, allows for some error checking.*/
using namespace std;


int main ()

{
/*This is where the variables for the data to be entered are created.*/
	int grade, total, count;
	double average = 0.0;
	count = 0;
	total = 0;

/*Creating the variable for the name of the file.*/
	string fileName;

/*Prompting the user for the name of the file, then inputting the name with ‘getline’.*/
	cout << "Enter a file name: ";
	getline (cin, fileName);

/*To read in data we use ‘ifstream’, followed by the file handle, inFile, then the parameter name,
    then call the function ‘c_str’, which converts the string into an array of char’s.
    The second parameter is ‘ios::in’ for input.*/
	ifstream inFile(fileName.c_str(), ios::in);

/*If the wrong file name is entered, or the file doesn’t exit, we get an error.*/
	if (!inFile)
		{
		cout << "File not found! " << endl;

/*This is a special command, part of the standard library, that causes the program to quit and return
    to the command prompt.  The error code ‘1’ is a standard code that is part of the standard library.*/
		exit(1);
		}

/*Keep reading in data until there is no data left, done by using the file stream function ‘eof’ for End Of File.*/
	while (!inFile.eof())
	{

/*Keep reading in data and sending it out to the screen until the end of the file is reached.*/
		inFile >> grade;

/*This step merely gives us a total of the grades.*/
		total += grade;
		++count;
		cout << grade << endl;

	}
/*This is merely to give us a grade average.*/
	average = total / count;
	cout << "The average grade is: " << average << endl;

/*The last step is to CLOSE THE FILE.*/
	inFile.close();

return 0;
}
