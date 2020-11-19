#include<iostream>
using namespace std;

class Box
{
	int x;
	int y;
	int z;
	bool empty;
public:
	void setx(int a);
	int getx();
	void sety(int b);
	int gety();
	void setz(int c);
	int getz();
	double getvolume();
	void print();
	Box();
	Box(int a, int b, int c, bool i);
};

void Box::setx(int a) { x = a; }
int Box::getx(){ return x;}
void Box::sety(int b) { y= b;}
int Box::gety() { return y; }
void Box::setz(int c) {z=c;}
int Box::getz(){return z;}
double Box::getvolume()	{ return x*y*z;}

Box::Box()
{
	x = 0;
	y = 0;
	z = 0;
	empty=true;
}

Box::Box(int a, int b, int c, bool i)
{
	x = a;
	y = b;
	z = c;
	empty= i;
}

void Box::print()
{
	cout<<"����: "<<x<<endl;
	cout<<"����: "<<y<<endl;
	cout<<"����: "<<z<<endl;
	cout<<"����: "<<getvolume()<<endl;
}


int main()
{
	Box b1(1,2,3, true);
	Box b2(3,4,5, true);
	Box b3(3,3,3, false);
	
	double vb1=b1.getvolume();
	double vb2=b2.getvolume();
	double vb3=b3.getvolume();

	if (vb1 < vb2)
	{
		if(vb2<vb3)
			cout<<"�ڽ� 3�� ���ǰ� ���� Ů�ϴ� : "<<vb3;
		else
			cout<<"�ڽ� 2�� ���ǰ� ���� Ů�ϴ� : "<<vb2;
	}
	else
	{
		if (vb1 < vb3)
			cout << "�ڽ� 3�� ���ǰ� ���� Ů�ϴ� : " << vb3;
		else
			cout << "�ڽ� 1�� ���ǰ� ���� Ů�ϴ� : " << vb1;
	}
	return 0;
}