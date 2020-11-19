#include<iostream>
#include<string>
using namespace std;

class point
{
private:
	int x;
	int y;
public:
	point();
	point(int a, int b);
	void print();
};

point::point() : x(0), y(0) {}

point::point(int a, int b) : x(a), y(b) {}

void point::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}

class circle
{
	int radius;
	point center;
public:
	circle();
	circle(int r);
	circle(point p, int r);
	circle(int x, int y, int r);
	void print();
};

circle::circle() : radius(0), center(0, 0) {}

circle::circle(int r) : radius(r), center(0, 0) {}

circle::circle(point p, int r) : radius(r), center(p) {}

circle::circle(int x, int y, int r) : radius(r), center(x, y) {}

void circle::print()
{
	cout << "중심: ";
	center.print();
	cout << "반지름: " << radius << endl << endl;
}

int main()
{
	point p(5, 3);

	circle c1;
	circle c2(3);
	circle c3(p, 4);
	circle c4(9, 7, 5);

	c1.print();
	c2.print();
	c3.print();
	c4.print();

	return 0;
}