#include <iostream>

using namespace std;

int main()
{
    string firstName;
    firstName = "Taylor";

    cout << endl;
    cout << "Hello, " << firstName << endl;
    string middleName, lastName;
    middleName = "Matthew";
    lastName = "Williams";

    cout << "Hello, " << firstName << " "
        << middleName << " " << lastName << endl;

    string fullName = firstName + " " + middleName + " " + lastName;
    cout << "Welcome, " << fullName << endl;

    return 0;
}
