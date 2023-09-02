#include<iostream>
using namespace std;

class Box
{
private:
	int length;
	int width;
	int height;
public:
	Box();
	Box(int l, int w, int h);
	int volume();
	void showBox();
};

int main()
{
	Box b1(100,50, 10);
	Box b2(10, 5 ,1);
	Box b3(1000, 500, 100);
	b1.showBox();
	b2.showBox();
	b3.showBox();
	cout << "volume of box 1 is : " << b1.volume() << endl;
	cout << "volume of box 2 is : " << b2.volume() << endl;
	cout << "volume of box 3 is : " << b3.volume() << endl;

	return 0;
}

Box::Box()
{
	length = 1;
	width = 1;
	height = 1;
}
Box::Box(int l, int w,int h)
{
	length = l;
	width = w;
	height = h;
}
void Box::showBox()
{
	cout << length << "x" << width <<"x"<< height << endl;
}
int Box::volume()
{
	return length * width * height;
}