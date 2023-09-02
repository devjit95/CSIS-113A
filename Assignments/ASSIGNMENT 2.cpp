#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	int a, b, c;
	cout << "Enter start fahrenheit: ";
	cin >> a;
	cout << "Enter stop fahrenheit: ";
	cin >> b;
	cout << "Enter step: ";
	cin >> c;


	int startNum = a;
	int stopNum = b;
	int stepNum = c;
	double cel;

		cout << "Fah" << setw(8) << "Cel" << endl;
		cout << "------ -------" << endl;

	for (int fah = startNum; fah <= stopNum; fah += stepNum)
		
	{
		cout << fixed << setprecision(1);
		cel = 5* ((double)fah - 32) / 9;
		cout << fah << setw(10) << cel << endl;

	}

	return 0;
}