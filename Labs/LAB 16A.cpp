#include <iostream>
using namespace std;

int main()
{
	double sum;
	double num1 = 5.75;
	double num2 = 12.33;
	double *pnum1;
	double *pnum2;
	pnum1 = &num1;
	pnum2 = &num2;
	sum = *pnum1 + *pnum2;

	cout << "The sum is " << sum << endl;

	return 0;
}