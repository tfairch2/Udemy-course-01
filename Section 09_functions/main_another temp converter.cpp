#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>
//Including 2 functions to convert between Fahrenheit & Celsius in one program
using namespace std;

//Function definition to convert Fahrenheit to Celsius
double ftoc(double temp)
{
    return (temp - 32.0) * (5.0/9.0);
}
//Function definition to convert Celsius to Fahrenheit
double ctof (double temp)
{
    return (temp * (9.0/5.0) + 32.0);
}

/*Function definition to ask which scale we are starting with
  c or f, then converting from celsius or converting from Fahrenheit.
  We are using two return statements to simplify the code
  by doing the selection of the conversion function within this function,
  using 'scale'.  It works by entering the temperature value then indicating
  which scale to which to convert, i.e. entering 100 f will convert 100 into the
  corresponding Fahrenheit value of 212.  Entering 32 c will convert 32 into the
  corresponding Celsius value of 0*/
double convertTemp(double temp, char scale)
{
    if (scale == 'c')
        return ftoc (temp);
    else if (scale == 'f')
        return ctof(temp);
}


int main()
{
    /*The following commented out block of code was used to convert Fahrenheit to
        Celsius individually in an earlier exercise.....

    double fahrTemp, celsius;
    cout << "Enter a Fahrenheit temperature: ";
    cin >> fahrTemp;

    celsius = ftoc(fahrTemp);
    cout << fahrtemp << " Fahrenheit is equal to "
         << celsius << " celsius." << endl;

    cout << "Enter a celsius temperature: ";
    cin  >> celsius;
    fahrTemp = ctof(celsius);
    cout << celsius << " celsius is equal to "
         << fahrTemp << " Fahrenheit. " << endl;*/

    /*....but this block of code uses two functions and two return statements in the
        'convertTemp' function above to allow for either conversion to be done with
         one prompt to the user*/
    double temp, convertedTemp;
    char tempScale;
    cout << "Enter a temperature and a scale to which to convert: ";
    cin >> temp >> tempScale;
    convertedTemp = convertTemp(temp, tempScale);
    cout << "The converted temperature is: "
         << convertedTemp << "." << endl;


    return 0;
}
