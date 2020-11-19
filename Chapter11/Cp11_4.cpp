#include<iostream>
using namespace std;

class Counter
{
	int value;
public:
	const void setvalue(int const v) {this->value=v;}
	const int getvalue() {return value;}
	const void countup() { value++; }
	const void countdown() { value--;}
	const void print() { cout<< value<<endl;}
};

int main()
{
	Counter a;

	a.setvalue(10);
	a.print();
	a.countup();
	a.print();
	a.countup();
	a.print();
	a.countdown();
	a.print();
	a.countdown();
	a.print();
	a.countdown();
	a.print();

	return 0;
}