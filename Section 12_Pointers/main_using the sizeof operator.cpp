#include <iostream>

/*The sizeOf function can be used to return the number of bytes to store either a data type or an expression.*/
using namespace std;

int main()
{
    /*The sizeof function here will provide the size of the following data types: */
    cout << "The size of an integer is " << sizeof(int);
    cout << "The size of a double is " << sizeof(double);
    cout << "The size of a string is " << sizeof(string);

    /*The sizeof function used on a specific expression, 'num': */
    int num = 1234;
    cout << "The size of num is " << sizeof(num) << endl;
    /*The expression 'num' has the same size as the datatype int because 'num' was declared as an integer.*/


    /*The sizeof function used on a pointer variable, *pnum: */
    int *pnum = &num;
    cout << "The size of the pointer pnum is "
        << sizeof(pnum) << endl;
    cout << "The size of the value at which pnum points is "
        << sizeof(*pnum) << endl << endl;
    /*Both of the above are size 4 because we are still working with integers.*/

    /*The sizeof function can also calculate the number of elements in an array, in this case, 'numbers[]': */
    int numbers [] = {5,10,15,20};
    int size = sizeof(numbers) / sizeof(*numbers);
    /*Since this array has four integer elements, it's size is 16 (4 numbers * 4 bytes per number)*/
    cout << sizeof(numbers) << endl;
    /*The size of one element of the array is 4: */
    cout << sizeof(*numbers) << endl;

    /*So now we know the number of elements because of the calculation 'size' on the line after the declaration
        of the array 'numbers', above.*/
    cout << "The number of elements in the array 'numbers' is "
        << size << endl;

    return 0;
}
