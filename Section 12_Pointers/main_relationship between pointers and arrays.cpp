#include <iostream>
#include <string>
#include <fstream>
#include<vector>
#include <math.h>
#include <ctime>
#include<cstdlib>

/*Demonstrates a close relationship between Pointers and Arrays.  Using an array, 'numbers[]' directly
    in a cout statement to display each element and then a pointer variable, '*pnumbers', to likewise
    output each array element*/
using namespace std;

int main()

{
	const int size = 4;

	int numbers[size] = {5,10,15,20};

	/*Using a loop to access the elements of the array 'numbers[]' */
	for(int i = 0; i < size; i++)
	/*Output all of the array elements to the screen. */
		cout << numbers[i] << " ";


	/*Creating a pointer to the address of the first element of 'numbers[]', so that
        we can see the value in the first array element*/
	int *pnumbers = &numbers[0];

	/*Outputting the first 'endl' puts the first element, numbers[0], on the next line...*/
        cout << endl << *pnumbers << endl << endl;

	/*...and the next two 'endl' commands cause the entire array, 'numbers[]',
        to output after a blank line, for clarity. */
	for(int i = 0; i < size; i++)

	/*Outputting the pointer variable '*pnumbers+i' causes each element of 'numbers[]'
        to display just like above with 'cout << numbers[i]'.
        Since *pnumbers takes precedence over the addition, '+1', the output must be
        written as below.  The way it's written causes the pointer to increment to the next
        location and not add one to the contents of *pnumbers.  Without the parentheses
        the output would be 6 because the value in *pnumbers would increment from 5 to 6 instead
        of *pnumbers pointing to the next element of the array, 10.*/
		cout << *(pnumbers+i) << " ";

    /*Some blank lines to separate another way of doing the above.*/
        cout << endl << endl << endl;

    /*Since an array name is a pointer to the first element of it's array.  This means the name
        can be used as a pointer into the array's own elements.*/
        for (int i = 0; i < size; i++)
        cout << *(numbers + i) << " ";

        cout << endl;

	return 0;

}
