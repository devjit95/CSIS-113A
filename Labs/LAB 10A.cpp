#include <iostream>
using namespace std;

void CountUp(int start , int stop , int step);

int main()
{
	CountUp(10,100,5);
	
	CountUp(2,20,2);

	return 0;
}

void CountUp(int start, int stop, int step)
{
	for (int x = start; x <= stop; x+=step)
		cout << x << endl;

}