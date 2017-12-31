/*How to write only characters to a file.*/

#include <iostream>
#include <fstream>

using namespace std;

/*int main()

{
	char c;
	c = 'a';
	ofstream outFile("chars.txt", ios::out);
	outFile.put('c');
	outFile.put('h');
	outFile.put('a');
	outFile.put('r');
	outFile.close();

	return 0;
}*/

/*Another way.  Here the user can enter as many characters as they wish
    and they will be added to the txt file.  Since we are using a 'cin' statement
    if any spaces are typed, such as between words of a sentence, they are removed
    in the resulting txt file.  To quit, the user must type 'CTRL-Z' then press <ENTER>*/

int main()

{
	char c;
	ofstream outFile("chars.txt", ios::out);
	while (cin >> c)
	{
		outFile.put(c);
	}

	outFile.close();

	return 0;
}
