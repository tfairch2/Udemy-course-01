#include <iostream>
#include <string>

#include <algorithm>
#include<vector>

//This program uses a vector to determine if a word is a palindrome
using namespace std;

void displayVectorS(vector<string> vect)
{
    for(int i = 0; i = vect.size(); i++)
        cout << vect[i];
}
/*build a 'reversed' word, puts a string into a vector to compare to
    the original word to see if the original word is a palindrome*/
string buildRWord(string word)
//This builds a reversed word from a string in a vector
{
    //variable to store the reversed word
    string rword = "";
    //vector to store the 'word'
    vector<string> wrd;
    /*Loop through the string and put the letters into the vector
        until we get to the end of the string (using an existing function)
        called length, which is part of the string class*/
    for (int i = 0; i < word.length(); i++)
    /*for each single value of i we will push_back each letter in the string
        until getting to the end of the string, which will put the entire
        string into a vector (linkedlist?????)*/
        wrd.push_back(word.substr(i,1));
    /*Then, starting at the end of the vector, we put the string in reverse
        order*/
        reverse(word.begin(), word.end());
    /*Next write each letter of the reversed vector into the rword variable */
    for(int i = 0; i < word.size(); i++)
        rword += word[i];
    /*Return the word from the function*/
    return rword;

}

int main()
{
    /*Get a word from the user, putting it into 'aword' variable*/
    string aword;
    cout << "Enter a word: ";
    /*Presuming the user only enters one word, not going to use getline()*/
    getline(cin,aword);
    /*Variable for the reverse of the variable 'aword'*/
    string raword = buildRWord(aword);
    /*Now that the input is in a vector, aword, and has also been placed in a vector
        in reverse order, 'raword', the two are compared and if they are 'equal to'
        each other, then 'aword' is a palindrome*/
    if (raword == aword)
        cout << aword << " is a palindrome." << endl;
    /*If they aren't equal to each other, 'aword' isn't*/
    else
        cout << aword << " is not a palindrome." << endl;

    return 0;
}
