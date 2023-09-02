#include <iostream>
#include <string>
using namespace std;

int main()
{
	string foods[5];
	int calories[5];
	int max_calories;
	int min_calories;
	int avg;
	int average;
	string max_food;


	for (int x = 0; x < 5; x++)
	{
		cout << "enter food " << endl;
		getline(cin, foods[x]);
		cout << "enter calories " << endl;
		cin >> calories[x];
		cin.ignore(255, '\n');
	}

	for (int x = 0; x < 5; x++)
		cout << foods[x] << "  " << calories[x] << endl;

	max_calories = calories[0];
	for (int x = 0; x < 5; x++)
	{
		if (calories[x] > max_calories)
		{
			max_calories = calories[x];
			max_food = foods[x];
		}

	}

	min_calories = calories[0];
	for (int x = 0; x < 5; x++)
	{
		if (calories[x] < min_calories)
		{
			min_calories = calories[x];
		}
	}

	 avg = 0;
    for(int x = 0; x < 5; x++) 
	{
        avg += calories[x];
    }
 
    average = avg / 5;
    
	
	cout << "max calories: " << max_calories << endl;
	cout << "max calorie food: " << max_food << endl;
	cout << "min calorie food: " << min_calories << endl;
	cout << "Average calories = " << average << endl;
	

	return 0;
}