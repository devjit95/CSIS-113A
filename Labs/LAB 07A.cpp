#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	char opCode;
	cout << "Enter Math Operator (+,-,*,/) : ";
	cin >> opCode;
	cout << "Enter First Operand: ";
	cin >> num1;
	cout << "Enter Second Operand: ";
	cin >> num2;
	switch (opCode)
	{
	case '+':
		cout << num1 << " Plus " << num2 << " Equals " << num1 + num2 << endl;
		break;
	case  '-' :
		cout << num1 << " Minus " << num2 << " Equals " << num1 - num2 << endl;
		break;
	case  '*':
		cout << num1 << " Times " << num2 << " Equals " << num1 * num2 << endl;
		break;
	case  '/':
		cout << num1 << " Divided by " << num2 << " Equals " << num1 / num2 << endl;
		break;
	default:
		cout << "Not A Valid Operator" << endl;
	}
	return 0;
}