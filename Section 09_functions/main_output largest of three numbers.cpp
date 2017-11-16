#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;
/*This Function compares 3 integers and outputs the largest one
  First, in the function definition, 3 placeholder integers are declared
  and must match the data type of the variables that are going to be entered
  by the user*/
int maximum(int num1, int num2, int num3)
{
    //The variable used for the largest value input by the user
    int largest;
    //The comparison to see which input value is the largest value
    if (num1 > num2)
        largest = num1;
    else
        largest = num2;
    if (num3 > largest)
        largest = num3;
    //After all comparisons are made, the largest value is output
    return largest;
}
int main()
{
    /*These are the variables for the input from the user.
    They are the same data type as are in the definition above*/
    int number1, number2, number3, max;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;

    /*This is where the function 'maximum', defined above
    is called.  The data types for the input variables must match
    the data types in the function definition above.  The variables up
    there, num1, num2 and num3, are just placeholders, waiting for the
    variables that were just entered in main(), number1, number2 &
    number3.  After all comparisons between the three input values
    have been made, the result is placed into 'max'.*/

    max = maximum(number1, number2, number3);

    /*The result, now in 'max', is output here*/
    cout << "The maximum value is " << max << endl;


    return 0;
}
