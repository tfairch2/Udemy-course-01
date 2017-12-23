#include <iostream>

/*Letter grade using case statements.  This will merely output "Pass" or
    "Fail" for the appropriate letter grade*/
using namespace std;

int main ()
{
	char letterGrade;
	cout << "Enter the letter grade: ";
	cin >> letterGrade;
	switch(letterGrade)
	{
/*The first four cases will output "Pass" for any of the grades A thru D.
    Very, very basic use of case statemebts*/
		case 'A':
		case 'B':
		case 'C':
		case 'D':
			cout << "You passed!" << endl << endl;
			break;

/*Only output this case for one grade.*/
		case 'F':
			cout << "You failed." << endl << endl;
			break;

/*We need the 'default' statement to cover an undesired input.*/
		default:
			cout << "I didn't get that grade." << endl;

	}

return 0;
}
