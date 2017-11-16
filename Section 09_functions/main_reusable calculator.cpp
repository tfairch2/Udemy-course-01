#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;
//This program is a simple calculator function named 'calc' that can be reused elsewhere
double calc (double operand1, double operand2,
             char oper)
{
    //I'm not certain if the variable 'result' is needed
    double result;
    /*Basic If Else_If statements to select which of the four mathematical
        operations will be performed*/
    if (oper == '+')
    /*These return statements do the actual computational work for the function
        based on the desired operator*/
        return operand1 + operand2;
    else if (oper == '-')
        return operand1 - operand2;
    else if (oper == '*')
        return operand1 * operand2;
    else if (oper == '/')
        return operand1 / operand2;
}
//End of the calculator function


int main()
{
    /*The variables 'op1' and 'op2' are used for the numbers to be used*/
    double op1, op2;
    /*'opratr' is for the kind of operation to be done*/
    char opratr;
    //Type in the mathematical problem to be calculated, on one line, no spaces
    cout << "Enter your expression: ";
    cin >> op1 >> opratr >> op2;

    /*This loop will cause 'calc' to continue to run until the user presses
        CTRL-C to stop*/
    while(true)
    {
        cout << "Result: " << calc(op1, op2, opratr) << endl;
        cout << "Enter your expression, or press CTRL C to quit: ";
        cin >> op1 >> opratr >> op2;
    }

    return 0;
}

