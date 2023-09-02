#include <iostream>
#include <string>
using namespace std;

char getMenuChoice();
void addFood(string arr1[], int arr2[], int& foodIndex);
void listFood(string arr1[], int arr2[], int size);

int main()
{
    string food[50];
    int calories[50];
    int index = 0;
    char choice;
    do
    {
    choice = getMenuChoice();
    switch (choice) 
    {
    case 'a':
        addFood(food, calories, index);
        break;
    case 'b':
        listFood(food, calories, index);
        break;
    case 'q':
        cout << "See you next time.";
        break;
    default:
        cout << "invalid selection";
    }
    }while (choice != 'q');
    
    return 0;
}

char getMenuChoice() 
{
    cout << " Menu " << endl;
    cout << " A. Add Foods " << endl;
    cout << " B. List Foods " << endl;
    cout << " Q. Quit " << endl;
    char choice;
    cin >> choice;
    return choice;
}

void addFood(string arr1[], int arr2[], int& foodIndex) 
{
    string food_name;
    int calories;
    cout << "Enter food name: ";
    cin.ignore(255, '\n');
    getline(cin, food_name);
    cout << "Enter calorie amount: ";
    cin >> calories;
    arr1[foodIndex] = food_name;
    arr2[foodIndex] = calories;
    foodIndex++;
    return;
}

void listFood(string arr1[], int arr2[], int size) 
{
    if (size == 0) 
    {
        cout << " ";
        return;
    }
    int x;
    for (x = 0; x < size; x++) 
    {
        cout << " Food Name : " << arr1[x] << " " << " Calorie amount : " << arr2[x] <<endl;
    }
}