#include <iostream>
using namespace std;

int main()
{
	int score;
	cout << "Enter Your Game Score: ";
	cin >> score;

	if (score >= 70)
	{
		cout << "You Win" << endl;
		cout << "Congratulations!" << endl;
	}
	else
	{
		cout << "You Lose" << endl;
		cout << "Try Again" << endl;
	}
	cout << "---------------" << endl;

	if (score < 70)
	{
		cout << "You Lose" << endl;
		cout << "Try Again" << endl;
	}
	else
	{
		cout << "You Win" << endl;
		cout << "Congratulations!" << endl;
	}
	cout << "---------------" << endl;

	if (score >= 70)
	{
		cout << "You Win" << endl;
		cout << "Congratulations!" << endl;
	}
	if (score < 70)
	{
		cout << "You Lose" << endl;
		cout << "Try Again" << endl;
	}

	return 0;
}