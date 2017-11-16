#include <iostream>

using namespace std;

int main()
{
// This exercise is good practice in using cout statements combined
// with cin and getline statements to obtain user input
    string name, present, city, yourName;
    int age;

    cout << "Enter name: " << endl;
    //getline is used for inputting more than one word to
    //the variable "name"
    //getline lets the computer ignore whitespace if it is
    //part of the input
    getline (cin, name);
    cout << "Present: " << endl;
    getline(cin, present);
    cout << "City: " << endl;
    getline(cin, city);
    cout << "Your name: " << endl;
    getline (cin, yourName);
    cout << "Age: " << endl;
    cin >> age;
    cout << endl << endl;
    //This is just for providing some output in the form of a
    //      letter to go with the data that was input above
    //Each of the variables above is output in the spot of the
    //letter that we want it to be output
    cout << "Dear " << name << "," << endl << endl;
    cout << "Blah blah " << present << ". "
         << "Blah blah blah " << age << " blah blah " << endl;
    cout << "blahbitty blah blah " << age-1 << "  blah " << endl;
    cout << city << ", " << present << ", " << endl << endl;
    cout << yourName << endl << endl;
    return 0;
}
;
