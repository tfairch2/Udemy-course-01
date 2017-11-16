#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;
    //This program will create a Histogram
int main()
{
    // Get 3 integers from the user
    int data1, data2, data3;
    cout << "Enter the first number:  ";
    cin >> data1;
    cout << "Enter the second number:  ";
    cin >> data2;
    cout << "Enter the third number:  ";
    cin >> data3;
    cout << endl;
    // Each For Loop will output a row of asterisks
    //  equal in length to the value that was entered
    for (int i = 1; i <= data1; ++i)

        cout << "*";
        cout << " " << data1 << endl;


    for (int i = 1; i <= data2; ++i)


       cout << "*";
       cout << " " << data2 << endl;


    for (int i = 1; i <= data3; ++i)

        cout << "*";
        cout << " " << data3 << endl;


    return 0;
}
