#include <iostream>
using namespace std;

int main()
{
	int c1 = 80;
	int c2 = 80;

	int c3 = 80;
	int c4 = 80;

	if ((c1 >= 80 || c2 >= 80) && (c3 >= 80 || c4 >= 80))
		cout << "GO FOR LAUNCH !!!" << endl;
	else
		cout << "ABORT!" << endl;

	return 0;
}