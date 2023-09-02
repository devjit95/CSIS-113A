#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	char response;

	do
	{
		int a, b ;
		int count = 0;
		cout << "How many multiplication problems ? " << endl;
		cin >> b; 
		for (a = 0; a < b; a++)
		{
			int num1, num2, ans, guess;
			srand(time(0));
			num1 = rand() % 12 + 1;
			num2 = rand() % 12 + 1;
			ans = num1 * num2;

			do
			{
				cout << num1 << " X " << num2 << " = ";
				cin >> guess;
				count++;
			} while (guess != ans);
			count;
			cout << "Correct ! " << endl;
			
		}
		double ac = b*100 / (double)count;
		cout << fixed << setprecision(1);
		cout << "Problems: " << b << "  Guesses: " << count << " Accuracy: " << (double)ac << "%"<< endl;
		cout << "Congratulations on Completing your Mission!" << endl;
		cout << "Try Again? (Y/N) " << endl;
		cin >> response;
		
	}while (response == 'Y' || response == 'y');
	cout << "Thanks for using Fun with Multiplication!" << endl;
	return 0;
}