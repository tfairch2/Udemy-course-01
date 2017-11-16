#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    // This is a basic interest calculator
    double balance, rate;
    int years;
    cout << "What is the beginning balance? ";
    cin >> balance;
    //The interest rate needs to be entered as a decimal
    cout << "Enter is the annual interest rate, in decimal form: ";
    cin >> rate;
    // Now, for the calculation to work, the interest rate needs to be
    //  preceded by the whole number 1
    rate ++;
    cout << "What is the time period in years? ";
    cin >> years;
    for (int i = 1; i <= years; ++i) {
        balance *= rate;
    }
    cout << "After " << years << " years, your balance will be "
         << balance << "." << endl;

    return 0;
}
