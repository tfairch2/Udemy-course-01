#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    string answer = "Watson";
    string response;
    cout << "Let's play a guessing game. "
        << "You get three tries. " << endl;
        cout << "What is the name of the computer "
        << "computer that played on Jeopardy? ";
    getline (cin, response);
    if (response == answer)
    {
        cout << "That's right! " << endl;
    }
    else
    {
        cout << "No, that's not right.  Try again. " << endl;
        cout << "What is the name of the computer "
            << "computer that played on Jeopardy? ";
        getline (cin, response);
        if (response == answer)
            {
                cout << "That's right! " << endl;
            }
        else
        {
        cout << "That's still not right. "
                 << "One more try. " << endl;
        cout << "What is the name of the computer "
            << "computer that played on Jeopardy? ";
        getline (cin, response);
        if (response == answer)
            {
                cout << "That's right! " << endl;
            }
        else
            {
                cout << "Sorry, you are out of tries. "
                     << "The correct answer is 'Watson' " << endl;
            }

        }

    return 0;
    }
}
