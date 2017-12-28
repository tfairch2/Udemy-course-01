#include <iostream>
#include <cstdlib>
#include <ctime>

/*This program uses a Do-While Loop to illustrate how this construct works better with user prompts.*/

using namespace std;

int main()
{
	srand(time(NULL));
/*Two integer variables, one for the answer generated by the program and one for the user�s guess.*/
	int number, guess;

/*Generating a random number from 1 to 10 and using the variable �number� to store it.*/
	number = rand() % 10 + 1;


/*Variable �cont�, for �continue�, is used for the user�s prompt whether to continue playing or not*/
	char cont = 'y';

/*�Do� means to keep doing everything up to the �While� statement as long as that statement is true.  It will ALWAYS do everything up to the while statement at least one time.  At that point the comparison statement will be made.*/
	do
	{
/*Comparison of the randomly generated number with the user�s guess*/
		cout << "Guess a number:  ";
		cin >> guess;
		if (guess == number)
		{
/*If the user�s guess matches the random number, exit the program.*/
			cout << "That's right! " << endl;

/*The keyword �break� will always take you to the first statement after a �While� loop or a �Do While� loop.  If the user guesses correctly, end the game*/
			break;
		}
/*If the guess doesn�t match the randomly generated number, ask if the user wants to keep trying.*/
		cout << "Sorry.  Do you want another guess? ";
		cin >> cont;
	}

/*As long as the user doesn�t enter �n� when asked to continue, the program will keep running.*/
	while (cont != 'n');
	return 0;
}