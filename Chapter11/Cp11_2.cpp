#include<iostream>
using namespace std;

class Mymath
{
	static double PI;
public:
	static double getPI(){return PI;}
	void print() {cout << PI<<endl;}
};

double Mymath::PI = 3.1415192;

int main()
{
	Mymath a;
	a.print();

	return 0;
}