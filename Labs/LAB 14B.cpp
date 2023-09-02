#include <iostream>
#include <string>

using namespace std;

struct MOVIE
{
	string title;
	string rating;
	int year;
	double minutes;
};

void showAll(MOVIE arr[], int size);

int main()
{
	MOVIE list[5] = { { "John Wick: Chapter 4 ","R",2023,169 },
				  { "The Super Mario Bros. Movie ","PG",2023,92 },
				  { "Pulp Fiction ","R",1994,154 },
				  { "The Shawshank Redemption ","R",1994,142 },
				  { "The Godfather ","R",1972,175 }
													};
	showAll(list, 5);
	return 0;
}

void showAll(MOVIE arr[], int size)
{
	for (int x = 0; x < size; x++)
		cout << arr[x].title << "\t" << arr[x].rating << "\t" << arr[x].year << "\t" << arr[x].minutes << endl;
}