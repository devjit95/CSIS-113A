#include <iostream>
#include <string>
using namespace std;

int main()
{
	string id = "Devjit Singh";
	cout << "My name is " << id.substr(0, 6) << " " << id.substr(7, 5) << endl;

	return 0;
}