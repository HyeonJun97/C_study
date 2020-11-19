#include<iostream>
using namespace std;

class Complex
{
private:
	double real;
	double imag;

public:
	Complex()
	{
		real=0;
		imag=0;
	}
	Complex(double a, double b)
	{
		real=a;
		imag=b;
	}
	~Complex() {};
	double getreal() {return real;}
	double getimag() {return imag;}
	Complex add(const Complex &c)
	{
		Complex temp;
		temp.real=this->real+c.real;
		temp.imag=this->imag+c.imag;
		return temp;
	}
	void print()
	{
		cout << real << "+"<<imag<<"i"<<endl;
	}
};

int main()
{
	Complex x(2,3), y(4,6), z;
	cout<<"첫번째 복소수 x: ";
	x.print();
	cout<<"두번째 복소수 y: ";
	y.print();
	z=x.add(y);
	cout<<"z = x + y = ";
	z.print();

	return 0;
}