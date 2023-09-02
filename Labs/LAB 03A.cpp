#include <iostream>

using namespace std;

int main()
{
	int incVal;
	cout << "Increment Value ";
	cin >> incVal;

	int minVal;
	cout << "Minimum Value ";
	cin >> minVal;

	int maxVal;
	cout << "Max Value ";
	cin >> maxVal;


	for (int x = minVal; x <= maxVal; x+= incVal)
		cout << x << endl;


	return 0;
}