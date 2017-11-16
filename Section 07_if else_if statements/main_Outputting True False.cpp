#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    /* This code demonstrates the output of True and False as 1 and 0, respectively.
    The first cout will output as True if the value of myPassword is equal to 'password'.
    The second cout will output as True if myPassword is NOT equal to 'password'.
    Since myPassword is initially given the value 'letmein', the first cout will evaluate
    False and the second will evaluate True.
    */
    string myPassword = "letmein";
    cout << (myPassword == "password") << endl;
    cout << (myPassword != "password") << endl;

    /* This code executes the same comparison for an int variable hoursWorked.
    Less than or equal to 40 hours worked will evaluate True, greater than 40
    will evaluate false.*/
    int hoursWorked = 41;
    cout << (hoursWorked <= 40) << endl;
    cout << (hoursWorked > 40) << endl;

    /* This code evaluates a double variable, hourlyRate
    */
    double hourlyRate = 25.00;
    cout << (hourlyRate <= 25.00) << endl;
    cout << (hourlyRate > 25.00) << endl;



    return 0;
}
