#include <iostream>
#include <cmath>

using namespace std;

/*This is a demonstration of using a 'Do While loop' to continually prompt the user
    for input until they are ready to exit the progam.*/

class Calculator
{

/*See Section 13 Lecture 88 for explanation of using a Class to create a very simple
    calculator program module that can be implemented in any program when needed*/
    public:

    double add(double op1, double op2)
    {
        return op1 + op2;
    }

        double sub(double op1, double op2)
    {
        return op1 - op2;
    }

        double mult(double op1, double op2)
    {
        return op1 * op2;
    }

        double div(double op1, double op2)
    {
        return op1 / op2;
    }

    double calc(double op1, double op2, char op)
    {
    if (op == '+')
        return add(op1, op2);
    else if (op == '-')
        return sub(op1, op2);
    else if (op == '*')
        return mult(op1, op2);
    else if (op == '/')
        return div(op1, op2);
    else cout << "Invalid operator, try again. ";

    }
};

int main()
{
	Calculator c;
	double op1, op2;
	char op;

/*Use a 'Do While loop' to keep the program running until the user is ready to quit.
    The variable 'resp', for Response, is created to trigger the end of the loop
    when the user is finished.*/
	char resp;
	do
	{
		cout << "> ";
		cin >> op1 >> op >> op2;

		cout << c.calc(op1, op2, op) << endl << endl;
		cout << "Another (y/n)? ";
		cin >> resp;
	}
/*Continue to ask for input until the user types 'n'.  That input will trigger
    the end of the loop and quit the program.*/
	while(resp != 'n');
    return 0;
}
