#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
	: name("Jane Doe"), balance(100)
{
}

BankAccount::BankAccount(string n, double b)
{
	name = n;
	balance = b;
}

double BankAccount::getBalance()
{
	return balance;
}

bool BankAccount::deposit(double amt)
{
	if (amt > 0)
	{
		balance += amt;
		return true;
	}
	else
		return false;
}
bool BankAccount::withdrawal(double amt)
{
	if (amt > 0)
	{
		balance -= amt;
		return true;
	}
	else
		return false;
}
void BankAccount::showAccountInfo()
{
	cout << "Bank Account Info" << endl;
	cout << "Name: " << name << endl;
	cout << "Balance: " << balance << endl;
}
