#include<iostream>
using namespace std;

class triangle
{
	int line;
	int high;
	double area;
public:
	void setline(int a);
	int getline();
	void sethigh(int b);
	int gethigh();
	void getarea();
	void print();
};

void triangle::setline(int a)
{
	line=a;
}

int triangle::getline()
{
	return line;
}

void triangle::sethigh(int b)
{
	high=b;
}

int triangle::gethigh()
{
	return high;
}

void triangle::getarea()
{
	area=line*high*0.5;
}

void triangle::print()
{
	cout<<"»ï°¢ÇüÀÇ ³ĞÀÌ´Â "<<area<<"ÀÔ´Ï´Ù."<<endl;
}

int main()
{
	triangle t;
	t.setline(4);
	t.sethigh(5);
	t.getarea();
	t.print();

	return 0;
}