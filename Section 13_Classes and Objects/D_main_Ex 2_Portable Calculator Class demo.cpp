#include <iostream>

using namespace std;

/*Another very basic calculator, input 2 numbers and an operand
    then calculate the result.  This Class can inserted in any program and used
    anyplace it is needed. It illustrates the portability of Classes.*/
class Calculator
{
    public:
/*One separate class for each type of operation*/
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

/*Now is the function which "drives" everything, named 'calc', with
    each operand declared again, and the operator declared as
    'op', which indicates the desired mathematical operation to be performed*/
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
    while(true)
    {
        cout << "> ";
        cin >> op1 >> op >> op2;
/*With the calculator built as a class, the following line of code can be inserted
    in any situation.  The variables below could be utilized with text boxes for
    the user to enter via a more elegant user interface.*/
        cout << c.calc(op1, op2, op) << endl;
    }
    return 0;
}
