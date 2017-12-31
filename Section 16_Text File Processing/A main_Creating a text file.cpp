#include <iostream>
#include <fstream>
/*This program covers creating and adding data to a text file.
The fstream library is needed to create and append to a text file.*/

using namespace std;

int main()
{
/*We are creating a text file called 'outFile' and it's a Class so it needs a constructor.
    It has two parameters -

	The first is the path for where we are storing the file.  It's at the subdirectory 'grades' and the actual text file is called 'grades'.
	Two backslashes are needed for the path in order for the compiler to properly interpret one of them as a part
	of the path name, not as '\n' or '\t', exactly like in UNIX ("escaping the backslash").

	The second is a constant, for how we want to work with the file.  Here we want to use it for output so we code 'ios::out'.
	The filename "grades.txt" is the file created for the data that was hard coded below and it will exist in the same
	folder as this .cpp file*/
	ofstream outFile("grades.txt", ios::out);

/*Here we are outputting data to the file*/
	outFile << 100 << endl;
	outFile << 90 << endl;;
	outFile << 80 << endl;;
	outFile << 70 << endl;;

/*When finished, we NEED TO BE SURE TO CLOSE THE FILE.*/
	outFile.close();
	return 0;
}

/*At this point to view the above data we would need to use a Command Window in the folder where this program was saved
    and enter this command:  "type grades.txt".  Reading from the file is covered in the next lecture.


The following code adds an interactive loop to enter data into the file, whereas above the data was coded into the program.
    It lets the user enter 6 integers into the file 'grades.txt'.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

Again, the file name entered below, "grades.txt" is the name of the file where the data entered will be saved and it will
    be created in the same folder containing this .cpp file.
	ofstream outFile("grades.txt", ios::out);
	int grade;

The loop prompts the user to enter each of the six grades, then closes out the file, prompting that the program is complete.
	for(int i = 1; i < 6; i++)
	{
		cout << "Enter a grade: ";
		cin >> grade;
	}

Again, when finished we NEED TO CLOSE THE FILE.
	outFile.close();
	cout << "All finished. " << endl;

	return 0;
}
This lesson covered the entering of data into the text file.  The next will demonstrate outputting from the file.*/

