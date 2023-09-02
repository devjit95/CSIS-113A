#include <iostream>
using namespace std;

int main()
{
	int mpg;
	cout << "Enter Vehicle's Miles Per Gallon: ";
	cin >> mpg;
	
	cout << "Your Car Is " << (mpg >= 18 ? "Fuel Efficient.":"A Gas Guzzler.")<< endl;

	return 0;
}