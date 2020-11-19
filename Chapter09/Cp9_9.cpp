#include<iostream>
using namespace std;

class average
{
	double average;
public:
	double setaverage(double a, double b);
	double setaverage(double a, double b, double c);
	void print();
};

double average::setaverage(double a, double b)
{
	average=(a+b)/2;
	return average;
}

double average::setaverage(double a, double b, double c)
{
	average=(a+b+c)/3;
	return average;
}

void average::print()
{
	cout<<"평균은 "<<average<<"입니다."<<endl;
}

int main()
{
	average a;
	a.setaverage(1,2);
	a.print();
	a.setaverage(1,2,3);
	a.print();

	return 0;

}