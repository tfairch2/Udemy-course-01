#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    // This program calculates factorial values
    int number, factorial;
    // Ask user to input the number to be calculated
    cout << "Enter a number: ";
    cin >> number;
    // 'factorial' is the variable to contain the value
    factorial = 1;
    // Loop until calculation reaches the number entered
    for (int i = number; i >= 1; i--)
    {
    // The calculation of the final result, while also
    // displaying the value as it is calculated
        factorial *= i;
        cout << factorial << endl;
    }
    // Output the final result
    cout << number << "! equals " << factorial << endl;

    return 0;
}

