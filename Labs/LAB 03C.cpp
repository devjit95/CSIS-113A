#include <iostream>

using namespace std;


int main()
{
	int rows; int col;
	cout << "How Many Rows? ";
	cin >> rows;
	cout << "How Many Columns? ";
	cin >> col;

	char myChar;
	cout << "Pick A Character: ";
	cin >> myChar;

	cout << "--------------------" << endl;

	for (int r = 1; r <= rows; r++)
	{
		for (int c = 1; c <= col; c++)
			cout << myChar <<"  ";
		cout << endl;
	}
	return 0;
}