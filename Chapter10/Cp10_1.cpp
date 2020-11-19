#include<iostream>
#include<string>
using namespace std;

class Plane
{
	int number;
	string model;
	int human;

public:
	void setnumber(int n);
	int getnumber();
	void setmodel(string m);
	string getmodel();
	void sethuman(int h);
	int gethuman();
	void print();
	Plane()
	{
		number = 10030;
		model = "Asiana";
		human = 100;
	}

	Plane(int a, string b, int c)
	{
		number=a;
		model=b;
		human=c;
	}
};

void Plane::setnumber(int n) {number=n;}
int Plane::getnumber() { return number;}
void Plane::setmodel(string m) {model=m;}
string Plane::getmodel() { return model;}
void Plane::sethuman(int h) { human = h;}
int Plane::gethuman() { return human;}

void Plane::print()
{
	cout<<"½Äº° ¹øÈ£: "<<number<<endl;
	cout<<"Model: "<<model<<endl;
	cout<<"½Â°´¼ö: "<<human<<endl<<endl;
}


int main()
{
	Plane a1;
	Plane a2(10020, "Jeju", 80);
	
	a1.print();
	a2.print();

	return 0;
}