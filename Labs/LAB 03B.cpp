#include <iostream>
#include <ctime>

using namespace std;

int main()

{
	srand(time(0));
	int guess;
	int secret = rand() % 20 + 1;
	int num = 0;
	do
	{
		cout << "Enter Guess ";
		cin >> guess;
		num++;

	} while (guess != secret);
	cout << "You Got It In " << num << " tries." << endl;


	return 0;
}