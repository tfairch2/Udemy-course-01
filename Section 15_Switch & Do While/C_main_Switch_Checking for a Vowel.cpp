#include <iostream>

/*Using a Switch Statement in a Function*/

using namespace std;

/*This function is a boolean because the letter is or is not a vowel, no other
    alternative*/
bool isVowel(char letter)
{
	switch(letter)
	{
/*Return true if the letter is an upper or lower case vowel*/
		case 'a': case 'A': case 'e': case 'E':
		case 'i': case 'I': case 'o': case 'O':
		case 'u': case 'U':
			return true;
			break;

/*If not a vowel, return false*/
		default:
			return false;

}
}
int main()
{
/*First, create a string variable for the sentence entered*/
string sentence;

/*Create a char variable for each letter entered.*/
char ltr;

/*Create an integer variable to total the number of vowels.*/
int numVowels = 0;

/*Prompt the user for input, then use getline to accept the input.*/
cout << "Enter a sentence: ";

/*We use 'getline' so that the whitespace between the words can be
    input.  It also allows the input of multiple sentences and is limited
    only by the amount of RAM.*/
getline(cin, sentence);

/*Loop through the string variable, letter by letter, like it's an array,
    because string variables are arrays.  'size()' ensures we don't go beyond
    the end of the string.*/
for(int i = 0; i < sentence.size(); i++)
    {
/*Pass each letter, one at a time, to the 'isVowel' function.*/
        ltr = sentence[i];
        if (isVowel(ltr))
/*If the 'isVowel' function returns true, then the letter just passed in is a
    vowel, so increment the 'numVowels' variable to keep a running total
    of vowels in the sentence*/
        ++numVowels;
    }

/*Finally, output the final count of vowels*/
	cout << "There are " << numVowels << " vowels in the sentence. " << endl;

return 0;
}

