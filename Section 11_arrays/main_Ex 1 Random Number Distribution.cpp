#include <iostream>
#include <cstdlib>
#include <ctime>

/*Determining how spread-out the range of function generated random numbers is.
    There are two arrays, one to generate an array of random numbers, 0 - 100
    and the other to sum the occurrences of each number in the first array*/

using namespace std;

/*First array function, to generate random numbers*/
void buildArray(int arr[], int size)
    {
    /*Random number generator*/
        srand(time(NULL));
        for(int i = 0; i < size; i++)
    /*Inputting the random numbers, 0 - 100, into the array.  Modulus 100 causes
        100 random values to generate, '+0' causes them to run from 0 to 100.*/
            arr[i] = rand() % 100 + 0;
    }
/*Second array function, to initialize another array to zeros.  Needed for the
    'distribArray'.*/
void initArray(int arr[], int size)
    {
        /*Loop through the array, setting each element to zero.*/
        for(int i = 0; i < size; i++)
            arr[i] = 0;
    }
/*Display each index position of the array of random numbers and it's corresponding
    element on a single line.*/
void displayArray(int arr[], int size)
    {
        for(int i = 0; i < size; i++)
            cout << i << ": " << arr[i] << endl;
    }

int main()
{
/*Variable, 'size', a constant, is for the array size and since the array runs
    from 0 to 100, the size of 'size' needs to be 101*/
    const int size = 101;

/*Declaring the first array, 'numbers', which is the actual array storing the random numbers
    generated in the function 'buildArray', entered above*/
    int numbers[size];

/*Calling the 'buildArray' function with the actual array name and it's size*/
    buildArray(numbers, size);
    cout << endl;

/*Calling 'displayArray' in order to see what's actually in the array*/
    displayArray(numbers, size);
    cout << endl;


/*The array 'distrib[]' is for displaying the number of times each randomly generated number in the
    array 'numbers[]' occurs.  Each location in 'distrib[]' represents a value in 'numbers[]',
    from 0 to 100.  When a randomly generated number in 'numbers[]' is found, the corresponding
    index position of that number in 'distrib[]' is incremented.*/
    int distrib[size];
/*initialize 'distrib[size]' using the initArray function or there will be random, pre-existing data
    from some of the locations.*/
    initArray(distrib, size);
    for(int i = 0; i < size; i++)
        distrib[numbers[i]] += 1;
/*For example:  now if the number 23 occurs 14 times in 'numbers[]', then distrib[23] will be equal to 14,
    and so forth.*/



/*Next, display the total occurrences of each randomly generated number.*/
    displayArray(distrib,size);
    cout << endl;
    return 0;
}
