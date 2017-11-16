#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

/*This is what the parts of a function consist of:
  Function definition

  data-type function-name(parameter list)
  {
    function body
    return statement
  }


  The following is the creation of the function for
  calculating the square of a number.
  Here, the function is called square*/
int square(int number)
{
    int squared = number * number;
    return squared;
    //That was the declaration of the function
}

int main()
{
    int number, squared;
    cout << "Enter a number:  ";
    cin >> number;
                                /*Next is the function call,
                                consisting of the function name followed by the argument list*/
    cout << number << " squared equals " << square(number) << endl;

    return 0;
}
