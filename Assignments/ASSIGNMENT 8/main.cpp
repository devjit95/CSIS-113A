#include"BankAccount.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double dep;
    double wd;
    char choice;
    string name;
    int account;
    double amount;

    cout <<"Enter name: "<< endl;
    getline(cin, name);
    cout << "Enter Account Number: " << endl;
    cin >> account;   
    cout<<"Enter amount: "<< endl;
    cin >> amount;
    
    BankAccount b(name, amount);
    do
    {
        b.showAccountInfo();
        cout << "A. Deposit B. Withdrawal C. Show Account Info Q. Quit" << endl;
        cout << "Enter choice: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 'a':
            cout << "how much to deposit " << endl;
            cin >> dep;

            if (b.deposit(dep) == true)
                cout << "Deposit successful" << endl;
            else
                cout << "invalid amount" << endl;

            break;
        case 'b':
            cout << "how much to withdrawal: " << endl;
            cin >> wd;
            if (b.withdrawal(wd) == true)
            {
                cout << "withdraw successful" << endl;
            }
            else
                cout << "Invalid amount" << endl;
            break;
        case 'c':
            b.showAccountInfo();
            break;
        case 'q':
            cout <<"see you next time " << endl;
            break;
        default:
            cout << "invalid choice" << endl;
        }
    } while (choice != 'q');
    return 0;
}
