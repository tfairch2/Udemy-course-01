#include <iostream>

/*After building the data for a Class, the next step is to build
    the 'Constructors'*/
using namespace std;

class Date
{
/*These are the 'Constructors', functions that let us to initialize
    a class object with data.*/
    private:
    int month, day, year;

    public:
/*The constructors always start with the name of the Class.
    Then we define the parameters, here they are single letters.  This
    Constructor is for declaring a date for a month day and year.*/
        Date(int m, int d, int y)
        {
/*Setting the parameters equal to the variables declared above.
    When a Constructor is called, the function grabs the arguments
    and assigns them to each Class data variable.*/
            month = m;
            day = d;
            year = y;
        }
/*Declaring another Constructor for the option of declaring a date as
    just a month and a year, no day.*/
        Date(int m, int y)
        {
            month = m;
            /*Not using a day in this instance so this Constructor
                has 'day' set to 0.*/
            day = 0;
            year = y;
        }
/*We can use the same name because the parameter lists are different.
    This is 'Constructor Overloading'.  So you can use as many constructors
    with the same name as there are different parameter lists.*/

/*This is the 'Default' constructor, and it presumes there is no initial data
    assigned to the Class Object, so it assigns Default Values to each variable.*/
        Date()
        {
            month = 0;
            day = 0;
            year = 0;
        }

};


int main()
{
/*Using the constructor in the code.  Declare the name of the class,
    followed by the object name for this particular instance, followed
    by the data.*/
    Date today(9,11,2001);
    Date yesterDay(9, 2001);
/*When we create the object that uses the 'Default Constructor', here,
    its variables are initialized to the default values.  When the class is
    instantiated, the values month day and year are set to 0, above.*/
    Date tomorrow;
/*If we wanted to use a date with just a day or just a month or a year
    we would create a fourth constructor above.*/



    return 0;
}
