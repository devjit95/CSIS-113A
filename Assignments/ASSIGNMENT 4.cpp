#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	char response;

	do
	{
		srand(time(0));
		int guess;
		int secret = rand() % 100 + 1;
		int num = 0;
		cout << "I'm thinking of a number between 1 and 100. Guess what it is " << endl;
		cout << "HINT: " << secret << endl;
		do
		{
			cout << "Enter Guess: " << endl;
			cin >> guess;
			num++;
			if (guess > secret)
				cout << "too high" << endl;
			else if(guess < secret)
				cout << "too low" << endl;


		} while (guess != secret);
		num;
		cout << "Eureka you got it in " << num << " guesses." << endl;

		if (num < 4)
			cout << "You are an above average player. You must be psychic.";
		else if (num == 5 || num == 6 || num == 7)
			cout << "You are an average player. Keep practicing.";
		else
			cout << "You are a below average player.Dont quit your day job.";

		cout << " Try Again? (Y/N) " << endl;
		cin >> response;

	} while (response == 'Y' || response == 'y');

	return 0;
}