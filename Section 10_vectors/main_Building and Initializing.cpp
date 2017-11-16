#include <iostream>
#include <string>
#include <fstream>
#include<vector>
#include <math.h>
#include <ctime>

using namespace std;
/*Three ways to initialize and enter data into a vector*/
int main()
{
    vector<string> names;   //vector initialization with no size (elements) reserved and no data initialized

    names.push_back("David");   //Initializing with push_back
    names.push_back("Raymond");
    names.push_back("Cynthia");

    names[0] = "David";         //Direct assignment with a subscript
    names[1] = "Raymond";
    names[2] = "Cynthia";

    vector<int> numbers(1000,0);//Initialization with default data

    return 0;
}
