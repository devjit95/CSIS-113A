#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n;

	//Working with Vectors
	cout << "How Many Vector Items: ";
	cin >> n;

	vector <string> vScore;

	for (int x = 0; x < n; x++)
	{
		string temp;
		cout << "Enter Name: ";
		cin >> temp;
		vScore.push_back(temp);
	}

	for (int x = 0; x < n; x++)
		cout << vScore[x] << endl;;

	cout << "--------" << endl;


	//Working with Dynamic Memory
	cout << "How Many Dynamic Items: ";
	cin >> n;

	string* pScore;
	pScore = new string[n];

	for (int x = 0; x < n; x++)
	{
		cout << "Enter Names: ";
		cin >> pScore[x];
	}

	for (int x = 0; x < n; x++)
		cout << pScore[x] << endl;

}