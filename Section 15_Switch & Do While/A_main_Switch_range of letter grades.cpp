#include <iostream>
/*Switch statements use a value you are testing for to decide which section of code to
    execute.  They operate like this:
        switch statement
        switch(experession)
        {
            case const-expression:

             set of statements to execute if the case expression is true;
             break; (this gets you out of the case expression after the set of statements have been executed)

            case const-expression:
             a different set of statements to execute if the first case expression is false but this one is true
             break; (this gets you out of THIS case expression after execution of this set of statements has been executed)

             . . . you can continue as long as necessary, with as many case expressions as needed. . .

             default:
              set of statements to be executed if none of the above case expressions are true;
        }     */


using namespace std;

/*Using a letter grade example to demonstrate possible case statements*/
int main()
{
/*Look at the user's letter grade to display the range of possible scores for that grade*/
    char letterGrade;
    cout << "Enter your letter grade: ";
    cin >> letterGrade;

/*Each letter grade, A to F, has it's own range of scores associated with it
    so each letter grade that could be entered will be a case statement*/
    switch(letterGrade)
    {
/*If the user entered "A", display the appropriate range of scores, and so forth*/
        case 'A':
            cout << "An A is in the range of 90 to 100" << endl;
            break;
        case 'B':
            cout << "A B is in the range of 80 to 89" << endl;
            break;
        case 'C':
            cout << "A C is in the range of 70 to 79" << endl;
            break;
        case 'D':
            cout << "A D is in the range of 60 to 69" << endl;
            break;
        case 'F':
            cout << "An F is in the range of 0 to 59" << endl;
            break;

        default:
            cout << "Don't recognize the input" << endl;
            break;

    }

    return 0;
}
