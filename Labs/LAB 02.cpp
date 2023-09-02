#include <iostream>

using namespace std;

int main()
{
	int feet;
	double inches;
	cout << "Enter number of feet to convert to inches:";
	cin >> feet;
	inches = 12 * ((double)feet);
	cout << "There are " << inches << " inches in " << feet; cout<< " feet." << endl;
	
	
	return 0;
}