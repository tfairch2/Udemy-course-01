#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
    // This is similar to Section 08_exercise
    // Declare variables for the answer, the user's response and for the loop
    // limiter, tries
    string answer = "Watson";
    string response;
    int tries = 1;
    cout << "A variation on an earlier guessing game." << endl
        << endl << "You get three tries." << endl;
    // Using a while loop to limit the user guesses to 3
    while (tries <= 3)
        {
            cout << "What is the name of the computer "
                << "that played Jeopardy? " << endl;
            // Using the getline function to allow for multiple word guesses
            getline(cin, response);
            // A correct answer ends the game
            if (response == answer)
            {
                cout << endl << "Correct " << endl;
            // Since a correct answer was given, we need to break out of the while
            //  loop now, so setting tries equal to 4 will do that and we won't
            //  continue looping to 3
                tries = 4;
            }
            else if (response != answer)
            {
                if (tries == 1)
                {
                    cout << endl << "Sorry, try again. " << endl << endl;
                    ++tries;
                }
                else if (tries == 2)
                {
                    cout << endl << "That's still not right.  Try one more time. "
                         << endl << endl;
                    ++tries;
                }
                else if (tries == 3)
                {
                    cout << endl << "Sorry, you're out of guesses. " << endl
                         << "The correct answer is Watson. " << endl;
                    ++tries;
                }
            }
        }

    return 0;
}
