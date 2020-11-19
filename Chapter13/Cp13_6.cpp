#include<iostream>
using namespace std;

class Shape
{
	double x, y, w, h, area;
public:
	Shape(double a = 0, double b = 0, double c = 0, double d = 0, double e=0) : x(a), y(b), w(c), h(d), area(e) {}
	void setx(double a) {x=a;}
	double getx() {return x;}
	void sety(double b) {y=b;}
	double gety() {return y;}
	void setw(double c) {w=c;}
	double getw() {return w;}
	void seth(double d){h=d;}
	double geth() {return h;}
	void setarea(double e) {area=e;}
	double getarea() {return area;}
	void display()
	{
		cout<<"너비: "<<getw()<<endl;
		cout<<"높이: "<<geth()<<endl;
	}
};

class Retan : public Shape
{
public:
	Retan(double a = 0, double b = 0, double c = 0, double d = 0) : Shape(a, b, c, d) {}
	double getarea() {return getw()*geth();}
};

class Tri : public Shape
{
public:
	Tri(double a = 0, double b = 0, double c = 0, double d = 0) : Shape(a, b, c, d) {}
	double getarea() { return getw()*geth()*0.5; }
};

int main()
{
	Retan r1(1.0,1.0,5.0,4.0);
	Tri t1(1.0,1.0,5.0,4.0);
	r1.display();
	cout << "면적: " << r1.getarea() << endl;
	t1.display();
	cout << "면적: " << t1.getarea() << endl;
	return 0;
}