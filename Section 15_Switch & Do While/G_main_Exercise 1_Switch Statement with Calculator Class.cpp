#include <iostream>

/*Using a 'Switch statement' to choose arithmetic operations in a simplified calculator*/

using namespace std;

/*See Section 13, Lecture 88 for explanation of using a Class to create a very simple calculator program module that can be implemented in any program when needed*/
class Calculator
{
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

/*'Switch Statements' used to decide which type of calculation is to be performed.*/
	double calc(double op1, double op2, char op)
 {

    	switch(op)
	{
    	case '+':
        return add(op1, op2);
    	case '-':
        return sub(op1, op2);
    	case '*':
        return mult(op1, op2);
    	case '/':
        return div(op1, op2);
    	default:
	   cout << "Invalid operator, try again. " << endl;

   	 }
 }
};

int main()
{
    Calculator c;
    double op1, op2;
    char op;

/*The variable 'resp' will be for the user to enter whether or not they want to continue with the Calculator.  When they enter ‘n’ the program will exit, instead of requiring them to press CRTL-C to exit.*/
    char resp = 'y';
    while(resp != 'n')
    {
/*This step will merely prompt the user with ‘>’ and they will enter the mathematical expression to be calculated*/
        cout << "> ";
        cin >> op1 >> op >> op2;

/*Now the user is given the result of the calculation then prompted whether or not they wish to continue.*/
        cout << c.calc(op1, op2, op) << endl;
	   cout << "Another? (y/n) ";
	   cin >> resp;
    }
    return 0;
}
