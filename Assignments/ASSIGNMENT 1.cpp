#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	int qty;
	double unitPrice, discountFactor, extPrice, discount, discountPrice;

	//Input
	cout << "Enter Quantity: ";
	cin >> qty;
	cout << "Enter Unit Price: ";
	cin >> unitPrice;
	cout << "Enter Discount Price Factor: ";
	cin >> discountFactor;


	//Calcutlations
	cout << fixed << setprecision(2);
	extPrice = qty * unitPrice;
	discount = extPrice * discountFactor;
	discountPrice = extPrice - discount;


	//Output
	cout << "--------------------------------" << endl;
	cout << "QTY: " << setw(21)<< qty << endl;
	cout << "Unit Price: " << setw(14) << unitPrice << endl;
	cout << "Extended Price: " << setw(10) << extPrice << endl;
	cout << "Discount Factor: " << setw(9) << discountFactor << endl;
	cout << "Discount: " << setw(16) << discount << endl;
	cout << "--------------------------------"<< endl;
	cout << "Discount Price: " << setw(10) << discountPrice << endl;



	return 0;
}