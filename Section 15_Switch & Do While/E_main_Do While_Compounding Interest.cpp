#include <iostream>

/*Re-writing a While loop as a Do-While loop.*/

using namespace std;

int main()
{
/*Calculate the number of years for a balance to reach a pre-set value of $10,000
    with a starting value of $5,000. */

	double balance, rate;
	int years = 0;
	balance = 5000;

/*The interest rate must be entered as a decimal, preceded by a 1, for example,
    an interest rate of 15% must be entered as "1.15" for our calculation to work properly.*/
	cout << "What is the interest rate, expressed as 1.## ? ";
	cin >> rate;

/*First, using a 'While' loop to make the calculation.... */
	while (balance < 10000)
	{
		balance *= rate;
		++years;
	}

	cout << "It will take " << years << " years to reach $10,000.00. " << endl;

/*Second, using a 'Do-While' loop...*/
	balance = 5000;
	rate = 0.0;
	years = 0;

	cout << "What is the interest rate, expressed as 1.## ? ";
	cin >> rate;

	do
		{
		balance *= rate;
		++years;
		}
	while (balance < 10000);
	cout << "It will take " << years << " years to reach $10,000.00. " << endl;
/*The 'Do-While' loop will work essentially the same as a 'While' loop unless the starting point
    is incorrect.  If 'balance' was initialized to a value greater than 10000, then the 'Do' statement
    would execute once and the output would be "1 year" because balance would start out greater
    than 10000 and the 'While' condition would already be met and the output would not make sense
    (1 year to reach 10000....it's already more than 10000)*/

return 0;
}
