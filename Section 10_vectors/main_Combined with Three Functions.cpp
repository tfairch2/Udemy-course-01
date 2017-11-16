#include <iostream>
#include <vector>

/*This exercise uses a vector in combination with three functions to display the sum
    of five grades, display each original grade and display each again but with a
    5 point curve*/

using namespace std;

//Function sumVector adds up all of the grades
int sumVector(vector<int> vect) //vector<int> vect are placeholders for 'sumVector' and 'grades'(see below)
{
    int total = 0;
/*As long as i is smaller than the size of the vector 'grades' (see below),
    keep adding the grades together*/

    for(int i = 0; i < vect.size(); i++)

        /*Add each element in the vector to 'total'.  The variable i
        allows us to increment through the vector, element by element*/
        total += vect[i];

        /*Return the sum, via 'total', to 'main' for output*/
    return total;
}
//Function displayVector o  utputs to the screen the values in the vector (which is why it is a void function)
void displayVector(vector<int> vect) //placeholders used by the function 'displayVector'
    {
        for(int i = 0; i < vect.size(); i++)
        /*'vect' here is used as a placeholder for the vector 'grades'.  The actual data used
            here will come from 'grades' when this function is called.
            'i' is used to access each element in 'grades'*/
        cout << vect[i] << " ";
    }
/*This function adds a 5 point curve to the grades.
    'vect' must be passed by reference here so that the changed values will appear when the program
    returns to 'main' after the function has completed*/
void curveGrades(vector<int> &vect, int amount)
{
    for (int i = 0; i < vect.size(); i++)
        vect[i] += amount;
}


int main()
{
    //'grades' is the vector holding the data
    vector<int> grades;
    //'total' is used to output the result calculated in 'sumVector'
    int total;
    //This is where the data is entered one by one using push_back
    grades.push_back(84);
    grades.push_back(77);
    grades.push_back(92);
    grades.push_back(98);
    grades.push_back(88);
    //Calling the function 'sumVector' so that the values in the vector can be added up
    total = sumVector(grades);
    cout << "The total is: " << total << endl;
    /*Now each single grade is output using the function 'displayVector' and the variable
        'grades' for each element in the vector.*/
    cout << "The individual grades are: " << endl;
    displayVector(grades);
    cout << endl;

    /*'curveGrades' adds a 5 point curve to each grade value and displays the new value
        because 'grades' is passed by reference up in the function by using '&vect'
        as the placeholder there.*/
    curveGrades(grades, 5);
    displayVector(grades);
    cout << endl;

    return 0;
}
