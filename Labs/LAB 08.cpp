#include <iostream>
using namespace std;

int main()
{
	double change = 13.88;
	int cents_remaining = change * 100;
	int dollars = cents_remaining / 100;
	cout << "DOLLARS: " << dollars << endl;
	cents_remaining -= (dollars * 100);
	int quarters = cents_remaining / 25;
	cout << "QUARTERS: " << quarters << endl;
	int dimes = cents_remaining / 10;
	cout << "DIMES: " << dimes << endl;
	int nickels = cents_remaining / 5;
	cout << "NICKELS: " << nickels << endl;
	int pennies = cents_remaining;
	cout << "PENNIES: " << pennies << endl;

	return 0;
}