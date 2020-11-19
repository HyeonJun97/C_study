#include<iostream>
using namespace std;

class rectangle
{
private:
	int width;
	int length;
	int s;
public:
	int calcarea();
	int getwidth();
	void setwidth(int w);
	int getlength();
	void setlength(int l);
	void print();
};

int rectangle::calcarea()
{
	s = width * length;
	return s;
}

int rectangle::getwidth()
{
	return width;
}

void rectangle::setwidth(int w)
{
	width = w;
}

int rectangle::getlength()
{
	return length;
}

void rectangle::setlength(int l)
{
	length = l;
}

void rectangle::print()
{
	cout << "넓이는 " << s << "입니다." << endl;
}

int main()
{
	rectangle rectangle;
	rectangle.setwidth(5);
	rectangle.setlength(10);
	rectangle.calcarea();
	rectangle.print();

	return 0;
}

