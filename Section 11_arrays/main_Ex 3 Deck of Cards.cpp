#include <iostream>
#include <cstdlib>
#include <ctime>

/*Using a two-dimensional array to crudely simulate of a deck of cards.*/
using namespace std;

void initDeck(int arr[][13], int rows)
    {
        for(int r = 0; r < rows; r++)
            for(int c = 0; c < 13; c++)
            arr[r][c] = 0;
    }

/*This function displays 13 numbers in 4 rows.  For the sake of definition,
    the rows are displayed in the order of 'Hearts', 'Diamonds', 'Clubs', 'Spades',
    but they aren't labeled as such.  The individual 'cards' are merely displayed as
    numbers 1 to 52, no royalty or ace's (which is beyond the skill level of this course)*/
void displayDeck(int arr[][13], int rows)
    {
        for(int r = 0; r < rows; r++)
        {
            for(int c = 0; c < 13; c++)
                cout << arr[r][c] << " ";
            cout << endl;
        }
    }

/*'suffleDeck' provides the random quality of shuffling to the program.*/
void shuffleDeck(int arr[][13], int rows)
    {
        int row, col;
        srand(time(NULL));
        for(int card = 1; card <= 52; card++)
        {
            row = rand() % 4;
            col = rand() % 13;
            if (arr[row][col] == 0)
                arr[row][col] = card;
            else
            {
                while (arr[row][col] != 0)
                {
                    row = rand() % 4;
                    col = rand() % 13;
                }
                arr[row][col] = card;
            }
        }
    }

int main()
{

    const int rows = 4;
    const int cols = 13;
    int deck[rows][cols];
    initDeck(deck, rows);

    shuffleDeck(deck, rows);
    displayDeck(deck, rows);

    cout << endl;

    return 0;
}
