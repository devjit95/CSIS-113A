#include <iostream>
using namespace std;

int main()
{
	char name[20];
	char acc[10];
	double balance = 500;
	double withdrawal;
	double deposit;
	char option;

	cout << "Enter Account Number: ";
	cin >> acc;
	cout << "Enter Name: ";
	cin >> name;
	do
	{
		cout << "SELECT MENU OPTION" << endl;
		cout << "A. Deposit" << endl;
		cout << "B. Withdrawal" << endl;
		cout << "C. Show Balance" << endl;
		cout << "D. Quit" << endl;
		cin >> option;

		switch (toupper(option))
		{
		case 'A':
			cout << "Deposit" << endl;
			cin >> deposit;
			if (deposit < 0)
				cout << "too low to deposit"<< endl;
			else if (deposit > 0)
				cout << "your balance now is " << "$" << deposit + balance << endl;
			break;
		case 'B':
			cout << "Withdrawal" << endl;
			cin >> withdrawal;
			if (withdrawal < 0)
				cout << "too low" << endl;
			else if (withdrawal > balance)
				cout << "Withdrawal Exceeds balance" << endl;
			else
				cout << "your balnce now is " << "$" << balance - withdrawal << endl;
			break;
		case 'C':
			cout << " Name: " << name << endl;
			cout << " Account Number: XXXX-" << acc << endl;
			cout << " $ " << balance << endl;
		case 'D':
			cout << "HAVE A NICE DAY!" << endl;
			break;
		default:
			cout << "NOT A VALID SELECTION" << endl;
		}
	} while (toupper(option) != 'D');

	return 0;
}