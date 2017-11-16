#include <iostream>

#include<vector>


using namespace std;
/*Three ways to accessing data in a vector.
    Calculating a grade - push_back, direct access with a loop
    and pop_back*/
int main()
{
    /*vector<int> grades;   //vector initialization
    int total, grade;

    for(int i=1; i <=5; i++)
    {
        cout << "Enter a grade: " << endl;
        cin >> grade;
        grades.push_back(grade);
    }
        //Adding data by direct access of the vector.  Impractical for a large amount of data
        total = grades [0] + grades [1] + grades [2] +
        grades [3] + grades [4];

        cout << "The total of the grades is: " << total
        << endl;
        //Using a loop to add data, having this as well as above is going to give us two outputs
        total = 0;
        for(int i = 0; i < grades.size(); i++)
            total += grades[i];
        cout << "The total of the grades is: " << total
            << endl;*/

        //Pop_back, used to get data from a vector
        vector<string> names;
        names.push_back("Taylor-Ezekiel");
        names.push_back("Jennifer-Renee");
        names.push_back("Matthew-Johnathon");
        names.push_back("Theresa-Marie");

        cout << endl;
        for(int i = 0; i < names.size(); ++i)
        {
            //each name in the vector will display
            cout << names[i] << " ";
        }
        // output a blank line before next outputs for easier reading
            cout << endl;
        // pop_back will remove the last name in the vector
        names.pop_back();

        for(int i = 0; i < names.size(); ++i)
        {
            //each remaining name will display
            cout << names[i] << " ";
        }
            //output a blank line before next outputs for easier reading
            cout << endl;
        //pop_back removes the last name in the vector
        names.pop_back();

        for(int i = 0; i < names.size(); ++i)
        {
            //each remaining name will display
            cout << names[i] << " ";
        }
        //another blank line before next outputs
            cout << endl;

        //remove what is now the last name in the vector
        names.pop_back();

        for(int i = 0; i < names.size(); ++i)
        {
            cout << names[i] << " ";
            //there is now only one name left in the vector and it is displayed, but not removed
        }
            // Two more blank lines for easier reading
            cout << endl << endl;
    return 0;
}
