#include <iostream>
using namespace std;

void amp (int &v, double f);

int main()
{
	int x = 100;
	cout << "BEFORE: " << x << endl;
	amp (x, .15);
	cout << "AFTER: " << x << endl;


	return 0;
}

void amp (int& v, double f)
{
	v += (f * 100);
}