#include <iostream>
using namespace std;

double  milesToKilometers(double miles);
double kilometersToMiles(double kilometers);
char getMenuChoice();

int main()
{

    char choice = getMenuChoice();
    double miles;
    double kilometers;
    do 
    {

        switch (toupper(choice))
        {
        case 'A':
            cout << "Enter miles: " << endl;
            cin >> miles;
            cout << milesToKilometers(miles) << endl;
            break;
        case 'B':
            cout << "Enter kilometers: " << endl;
            cin >> kilometers;
            cout << kilometersToMiles(kilometers) << endl;
            break;
        case 'Q':
            cout << "Quit. " << endl;
            break;
        default:
            cout << "Not valid." << endl;
        }

        if (choice != 'Q')
        {
            choice = getMenuChoice();
        }

    } while (toupper(choice) != 'Q');
    return 0;
}

    double  milesToKilometers(double miles)
    {
        return miles * 1.6093;
    }
    double kilometersToMiles(double kilometers)
    {
        return kilometers * 0.6214;
    }
    char getMenuChoice()
    {
        char choice;
        cout << "A. Miles to Kilometers,  B. Kilometers to Miles,  Q. Quit. " << endl;
        cin >> choice;
        return choice;
    }
