#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    double operand1, operand2, result;
    char op;
    cout << "Enter an expression (operand1, operator, operand2): ";
    cin >> operand1 >> op >> operand2;
    if (op == '*')
    {
        result = operand1 * operand2;
        cout << "Result:  " << result << endl;
    }
    else if (op == '/')
    {
        result = operand1 / operand2;
        cout << "Result:  " << result << endl;
    }
    else if (op == '+')
    {
        result = operand1 + operand2;
        cout << "Result:  " << result << endl;
    }
    else if (op == '-')
    {
        result = operand1 - operand2;
        cout << "Result:  " << result << endl;
    }
    else
    {
        cout << "This is an invalid expression.";
    }


    return 0;
}
