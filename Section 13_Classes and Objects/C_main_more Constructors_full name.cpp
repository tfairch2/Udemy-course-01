#include <iostream>
#include <string>

/*Creating a Class (a "Name" Class that works with a full name)*/
using namespace std;

/*Start by creating the class by starting with the keyword 'class'
    to signify the beginning of a class, then the name we are
    going to use, 'Name'*/
class Name
{
/*Classes are broken up into a 'Public' section and a 'Private' section*/
    private:
/*First, declare the variables.  In a class, we store the data and
    the operations in one place.*/
        string first, middle, last;
/*The 'public' section contains the interface*/
    public:
/*Here is the 'constructor' function which allows us to put data into
    the function. The variables 'fname','mname' and 'lname' are
    and have the name of the constructor in their names.*/
    Name(string fname, string mname, string lname)
    {
        first = fname;
        middle = mname;
        last = lname;
    }
/*Now create a function that returns the data stored in the object*/
    string toString()
    {
        return first + " " + middle + " " + last;
    }
/*Semi colon below indicates the end of the Class definition.*/
};


int main()
{
/*'Class Declaration'.  Type the name of the class followed by the object
    name we want to give followed by the data we are passing in.*/
    Name myName ("Ezekiel", "Taylor", "Michaelson");
    cout << myName.toString() << endl;
    return 0;
}

