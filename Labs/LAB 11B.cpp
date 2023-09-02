#include <iostream>
#include <string>

using namespace std;

void displayAll(string arr1[], int arr2[], int size);
int maxCal(int arr2[], int size);
int avgCal(int arr2[], int size);
int minCal(int arr2[], int size);


int main()
{
	string names[] = { "pizza","burger","fries","soda","eggroll","tuna","shake","sub","cookies","pie"};
	int calories[] = { 1060,400,200,100,500,160,300,600,550,164 };
	displayAll(names, calories, 10);
	cout << "highest calories is: " << maxCal(calories, 10) << endl;
	cout << "average calories is: " << avgCal(calories,10) << endl;
	cout << "minimum calories is: " << minCal(calories, 10) << endl;
	return 0;
}

void displayAll(string arr1[], int arr2[], int size)
{
	for (int x = 0; x < size; x++)
		cout << arr1[x] << "  " << arr2[x] << endl;
}
int maxCal(int arr2[], int size)
{
	int max = arr2[0];
	for (int x = 1; x < size; x++)
		if (arr2[x] > max)
			max = arr2[x];
	return max;
}
int avgCal(int arr2[], int size)
{
	int avg;
	int total=0;
	for (int x = 0; x < size; x++)
		total += arr2[x];
	avg = total / size;
	return avg;
}
int minCal(int arr2[], int size)
{
	int min = arr2[0];
	for (int x = 1; x < size; x++)
		if (arr2[x] < min)
			min = arr2[x];
	return min;
}