#include <iostream>
using namespace std;

int main()
{
	double grade;
	cout << "Wat was your grade ? :" << endl;
	cin >> grade;
	cout << "Your Letter Grade is " << endl;
	if (grade >= 90)
		cout<<" A ";
	else if (grade >= 80)
		cout << " B ";
	else if (grade >= 70)
		cout << " C ";
	else if (grade >= 60)
		cout << " D ";
	else
		cout << " F ";
	
	return 0;
}