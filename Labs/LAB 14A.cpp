#include <iostream>
using namespace std;

struct BOX
{
	int length;
	int width;
	int height;
};

int calcArea(BOX s);

int main()
{
	BOX s1 = { 100,50,10 };
	BOX s2 = { 25,10,10 };
	cout << "Volume: " << calcArea(s1) << endl;
	cout << "Volume: " << calcArea(s2) << endl;

	return 0;
}

int calcArea(BOX s)
{
	int area;
	area = s.length * s.width * s.height;
	return area;
}