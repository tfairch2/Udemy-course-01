#include <iostream>

using namespace std;
/*Three ways to initialize an array - using a for loop to populate each element, using an
    initialization list for all elements and only initializing part of the array*/
int main()
{
    /*1. Using a for loop to initialize all of the array, named 'numbers', elements*/
    int numbers[10];
    for(int i = 0; i < 10; i++)
    /*Since array element positions begin at 0, this step adds one so that
        the values in the elements make more sense, going from 1 to 10 and
        not 0 to 9*/
        numbers[i] = i + 1;
    /*Display each element in the array and the value contained there*/
    for(int i = 0; i < 10; i++)
        cout << i << ": " << numbers[i] << endl;
        cout << endl << endl;


    /*2. Initialization list.  Don't need to declare the size because adding the
        data here allows the compiler to size the array.  Use braces for the list.
        Commas with no spaces separate the values.*/
    int numbers2[] = {1,2,3,4,5,6,7,8,9,10};
        for(int i = 0; i < 10; i++)
        cout << i << ": " << numbers2[i] << endl;
        cout << endl << endl;

    /*3. Declare and initialize the array using an initialization list but only
        initializing part of the elements*/
    int numbers3[10] = {1,2,3,4,5};
        for(int i = 0; i < 10; i++)
    /*Zero is the default value for the Integer data-type, so the compiler substitutes
        that for the uninitialized elements*/
        cout << i << ": " << numbers3[i] << endl;
        cout << endl << endl;


    return 0;
}
