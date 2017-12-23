/*Explanation
Do-While statement:

do
	{
	set of statements;
	statement to modify the control variable;
	}
while (relational epression);

*/

#include <iostream>

/*In a Do-While statement, the relational expression (the test) is at the bottom of the loop
    instead of at the top, as with a While Statement.  This means it will ALWAYS proceed through the set of
    statements in the Do portion at least once before getting to the conditions, i.e. the "relational expression".
    The program will execute the set of statements at least once, even if the relational expression is false
    the first time it is tested.*/

using namespace std;

/*This example sums 10 integers*/

int main()
{
/*This program merely adds up the first ten integers.*/
	int sum = 0;
	int num = 1;
	do
	{
		sum += num;
		num++;
	}
/*Now the test for the size of 'num' is executed, AFTER the 'Do' set of statements.  The loop stops
    when the set of integers reaches 11.  We could have initialized 'num' to any amount of integers
    we wished to sum.*/
	while (num < 11);
	cout << sum << endl;

/*Since the conditional expression is placed here, the 'Do' statements are executed THEN the condition
    of whether or not 'num' is less than 11 is checked.  If 'num' had been initialized to 12, then the
    'Do' statements still would have been executed and then the test for 'num' being less than 11 made*/




return 0;
}
