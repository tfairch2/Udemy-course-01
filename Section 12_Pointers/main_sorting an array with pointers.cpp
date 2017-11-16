#include <iostream>
#include <cstdlib>
#include <ctime>

/*Building an array of random numbers then sorting it into numeric order.
    This program will use an 'exchange function' in order to switch places of
    two numbers of different values, the larger placed after the smaller.
    When the program is finished, the cumulative switching of places will result
    in all of the array values being placed in order.*/

using namespace std;
/*This program uses the 'buildArray' and the 'displayArray' functions created previously
    in the program from Section 11_Arrays\Ex 1 - Random Number Distribution.

    Below is the function to build the array (buildArray) using randomly generated
    numbers from 1 to 100.  The variable 'arr' is the placeholder for the actual array
    inside main() and 'size' is a placeholder for the array size.*/

void buildArray(int arr[], int size)
    {
        srand(time(NULL));
        for(int i = 0; i < size; i++)
            arr[i] = rand() % 100 + 1;
    }

/*Next is the function to display the array (displayArray) using a for loop and the
    variable 'arr' as a placeholder for the actual array, 'size' as a placeholder
    for cycling through the array.*/
void displayArray(int arr[], int size)
    {
        for(int i = 0; i < size; i++)
/*This cout stmt outputs the individual elements of the array (the randomly generated numbers)*/
            cout << arr[i] << " ";
    }

/*This function, 'swap', uses three variables to change the order of two array elements at a time
    as needed.  'num1' and 'num2' are pointer variables so that the actual values in each element location
    can be swapped, as needed.  The integer variable 'temp' needs to be an actual variable because it is just
    a location for one variable when a swap is performed.*/
void swap(int *num1, int *num2)
    {
/*When called, this function puts the first number into 'temp', then the second number in 'num1', then the previous
    content of 'num1' into 'num2'.  They have switched places.*/
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

/*This function uses nested for loops to sort the numbers two at a time.
    The exchangeSort method is not efficient, but it is simple to implement and relatively easy to understand.*/
void exchangeSort(int arr[], int size)
    {
        /*The outer loop runs from 0 to the next-to-last element of the array*/
        for(int i = 0; i < size-1; i++)

        /*The inner loop runs 1 element after the outer loop so that two consecutive elements can be compared
            and swapped if needed so that the array is put into ascending order.*/
            for(int j = i+1; j < size; j++)

        /*If the 1st element, i, is greater than the 2nd element, j, call the 'swap' function so that they will be
            switched.  Do this through the entire array, repeatedly, until all the elements are in order*/
                if (arr[i] > arr[j])

        /*Since the swap function, above, uses pointers, we use addresses here.*/
        {
            swap(&arr[i], &arr[j]);

        /*'displayArray' will let us look at the array as it's sorting.*/
            displayArray(arr, size);

        /*This output displays all ten numbers of the array on one line, each time the array is sorted.*/
            cout << endl;
        }

    }

int main()
{
/*declaring the size of the array, 10 to keep it manageable and the process short, then building the array, 'numbers'.*/
    const int size = 10;
    int numbers[size];

/*Using 'buildArray' to build the array 'numbers' and giving it the size that we declared above in 'size'.*/
    buildArray(numbers, size);

/*Outputting the array before it is sorted...*/
    cout << "Before sorting: " << endl;
    displayArray(numbers, size);

/*...and now outputting during the sort.*/
    cout << endl << endl << "The sort process: ";

/*Moving the display of the array after down to the next line after each sort.*/
    cout << endl;

/*Sorting the array, two numbers at a time, making it's way through the array and swapping numbers as it
    goes.*/
    exchangeSort(numbers, size);

    return 0;
}

