#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

//This program uses functions to convert a temperature from Fahrenheit to Celsius and vice versa.

void fToC(double &temp);   //These are two Function Prototypes/Declarations, "temp" is a
void cToF(double &temp);   //  formal argument, i.e. a placeholder for the argument to be passed
						   //  in at the Function Call within main.  "&" makes it a
						   //  Pass-by-Reference variable.

int main()
{
	/*Variable initializations for the temperature and the scale (Fahrenheit or Celsius) to convert.
	There only needs to be one variable for the temperature because we don't need to use it for
	anything but either the input temperature or the converted temperature.*/
	double temperature;
	//"scale" is how the program chooses which conversion formula to use.
	char scale;

	/*Prompting the user for the temperature they have and what scale they want to convert to.*/
	cout << "Enter a temperature:  ";
	cin >> temperature;
	cout << "What are you converting to?  ";
	cin >> scale;

	/*Since this is just an exercise, there is no provision for the user entering a scale value of anything
	but a C or F, uppercase or lowercase.
	If the user entered F or f, they want to convert Celsius to Fahrenheit*/
	if (scale == 'F' || scale == 'f')
	{
		/*Function Call with the actual argument/variable to be used by the function.
		If converting TO Fahrenheit, then we use Celsius to Fahrenheit conversion function.*/
		cToF(temperature);
	}

	//If the user entered C or c, they want to convert Fahrenheit to Celsius.
	else if (scale == 'C' || scale == 'c')
	{
		//If converting TO Celsius, then we use Fahrenheit to Celsius conversion function.
		fToC(temperature);
	}
	cout << endl << "And the other temperature value is:  " << temperature <<
		endl << endl << endl;

	//These two lines of code are here just to stop Visual Studio from closing the command window immediately.
	int value;
	cin >> value;


	return 0;
}


/*These are the Function Definitions which tell the program what to do within the function.
Here "temp" is a formal argument, i.e. a placeholder for the actual arguments
provided in the Function Call, within main.  fToC and cToF are void because they calculate a
value, they don't return the result so they don't need a data type*/
void fToC(double &temp)  //&temp needs a data type because &temp is used in the calculation
{
	temp = (temp - 32) / 1.8; // This is the formula for converting Celsius to Fahrenheit
}

void cToF(double &temp)
{
	temp = (temp * 1.8) + 32; // This is Fahrenheit to Celsius
}
