#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	char c;
	char count = 0;
	ifstream inFile("chars.txt", ios::in);

	inFile.get(c);
	while (!inFile.eof())
	{
		cout << c;
		if (c == 'e')
			++count;
		inFile.get(c);
	}
	cout << endl << endl;
	cout << "There are " << count << " es in the file." << endl << endl;
	inFile.close();


	return 0;
}
