#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <ctime>

using namespace std;

int main()
{
   int grade;
   string letterGrade;
   cout << "Enter a grade: " << endl;
   cin >> grade;
   /*
   */
   if (grade >=90)
   {
       letterGrade = "A";
   }
   else if (grade >=80)
   {
       letterGrade = "B";
   }
   else if (grade >=70)
   {
       letterGrade = "C";
   }
   else if (grade >=60)
   {
       letterGrade = "D";
   }
   else
   {
       letterGrade = "F";
   }
    cout << "The letter grade for a '" <<
    grade << "' is a " <<
    letterGrade << "." <<endl;

    return 0;
}
