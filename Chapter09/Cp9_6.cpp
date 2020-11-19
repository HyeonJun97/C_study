#include<iostream>
#include<string>
using namespace std;

class complex
{
	double real;
	double imag;

public:
	void add(double a, double b, double c, double d);
	void sub(double a, double b, double c, double d);
	void print();
};

void complex::add(double a, double b, double c, double d)
{
	real=a+c;
	imag=b+d;
}

void complex::sub(double a, double b, double c, double d)
{
	real = a - c;
	imag = b - d;
}

void complex::print()
{
	if(imag>0)
	cout<<real<<"+"<<imag<<"i"<<endl;
	else
	cout << real << "-" << imag << "i" << endl;
}

int main()
{
	complex c;
	cout<<"복소수 테스트(2+3i, 5+2i)"<<endl;
	c.add(2,3,5,2);
	c.print();
	c.sub(2,3,5,2);
	c.print();

	return 0;
}