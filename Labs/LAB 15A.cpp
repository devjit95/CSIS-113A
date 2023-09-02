#include <iostream>
#include <string>

using namespace std;

class Explorer
{
private:
	string name;
	int score;
	int numGold;
	int numSilver;
public:
	Explorer();
	Explorer(string n, int s, int nG, int nS);
	int getScore();
	void findGold();
	void findSilver();
	void robbed();
	void robbed(int n);
	void showInfo();
};

Explorer::Explorer()
	: name("Devjit"), score(1000), numGold(100), numSilver(50)
{
}

Explorer::Explorer(string n, int s, int nG, int nS)
	:name(n), score(s), numGold(nG), numSilver(nS)
{
}


int Explorer::getScore()
{
	return score;
}

void Explorer::findGold()
{
	score = score + 100;
	numGold++;
}

void Explorer::findSilver()
{
	score = score + 50;
	numSilver++;
}

void Explorer::robbed()
{
	score = 0;
	numGold = 0;
	numSilver = 0;
}

void Explorer::robbed(int n)
{
	score = score - n;
}

void Explorer::showInfo()
{
	cout << "STATS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << "Name: " << name << endl;
	cout << "Score: " << score << endl;
	cout << "Gold Coins: " << numGold << endl;
	cout << "Silver Coins: " << numSilver << endl << endl;
}


int main()
{
	Explorer player1;
	Explorer player2("john doe", 100, 10, 30);
	player1.showInfo();
	player2.showInfo();
	player1.findGold();
	player1.findGold();
	player1.findSilver();
	player1.showInfo();
	player2.showInfo();
	player2.robbed(150);
	player2.showInfo();
	player2.robbed(50);
	player2.findGold();
	player2.findGold();
	player2.findSilver();
	player2.showInfo();

	
}