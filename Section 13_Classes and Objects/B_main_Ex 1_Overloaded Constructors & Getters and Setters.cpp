#include <iostream>
/*Exercise in the principals of creating Classes with a class called 'Time'
    to keep track of hours, minutes and seconds.  This also demonstrates
    creating Setter and Getter functions.*/
using namespace std;

class Time
{
    private:
    int hours, minutes, seconds;

    public:
/*Creating 'Overloaded Constructors', have the same name but differ in
    the parameter lists.  First one tracks hours, minutes and seconds*/
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
/*The second constructor, also named 'Time', only tracks hours and minutes
    so we leave 'seconds' out of the declaration and set it equal to 0
    in the definition.*/
    Time(int h, int m) //we don't have 'int s' because we aren't using 'seconds' in this Class.
    {
        hours = h;
        minutes = m;
        seconds = 0;
    }
/*The third constructor will only track 'minutes', so 'hours' and 'seconds'
    are left out of the Declaration and set to 0 in the Definition.*/
    Time(int m)
    {
        hours = 0;
        minutes = m;
        seconds = 0;
    }
/*The 'Default Constructor' has no variables in the Declaration and sets
    all three (hours minutes and seconds) to 0 in the Definition.*/
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
/*The 'Setter' functions.*/
    void setTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void setHours(int h)
    {
        if (hours <= 23)
            hours = h;
        else
            hours = 0;
    }
    void setMinutes(int m)
    {
        if (minutes <= 59)
            minutes = m;
        else
            minutes = 0;
    }
    void setSeconds(int s)
    {
        if (seconds <= 59)
            seconds = s;
        else
            seconds = 0;
    }

/*These are the 'Getter' functions.*/
    int getHours() const
    {
        return hours;
    }
    int getMinutes() const
    {
        return minutes;
    }
    int getSeconds() const
    {
        return seconds;
    }

/*Function to display the time.*/
    void showTime()
    {
        if (seconds > 0)
            cout << hours << ":"
                << minutes << ":"
                << seconds;
        else
            cout << hours << ":"
                << minutes;
    }

    void increment(int n)
    {
        minutes += n;
        if (minutes > 59)
        {
            hours++;
            minutes -= 60;
        }
    }
};


int main()
{
    Time theTime(6,0,0);
    theTime.showTime();
    cout << endl;


    theTime.setMinutes(23);
    theTime.showTime();
    cout << endl;

    for(int i = 1; i <= 61; i++)
        theTime.increment(1);
    theTime.showTime();
    cout << endl;


    return 0;
}
