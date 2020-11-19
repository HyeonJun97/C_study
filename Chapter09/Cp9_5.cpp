#include<iostream>
#include<string>
using namespace std;

class cellphone
{
	string model;
	string company;
	string color;
	string power;
	string camera;
public:
	void setmodel(string m);
	string getmodel();
	void setcompany(string c);
	string getcompany();
	void setcolor(string co);
	string getcolor();
	void setpower(string p);
	string getpower();
	void setcamera(string ca);
	string getcamera();
	void print();
};

void cellphone::setmodel(string m)
{
	model=m;
}
string cellphone::getmodel()
{
	return model;
}

void cellphone::setcompany(string c)
{
	company = c;
}
string cellphone::getcompany()
{
	return company;
}

void cellphone::setcolor(string co)
{
	color = co;
}
string cellphone::getcolor()
{
	return color;
}

void cellphone::setpower(string p)
{
	if(p=="true")
		power="ON";
	else
		power="OFF";
}
string cellphone::getpower()
{
	return power;
}

void cellphone::setcamera(string ca)
{
	if (ca == "true")
		camera = "O";
	else
		camera = "X";
}
string cellphone::getcamera()
{
	return camera;
}

void cellphone::print()
{
	cout<<"��: "<<model<<endl;
	cout<<"���� ȸ��: "<<company<<endl;
	cout<<"����: "<<color<<endl;
	cout<<"����: "<<power<<endl;
	cout<<"ī�޶�: "<<camera<<endl;
}

int main()
{
	cellphone galaxy;

	galaxy.setmodel("Galaxy 9");
	galaxy.setcompany("Samsung");
	galaxy.setcolor("White");
	galaxy.setpower("true");
	galaxy.setcamera("true");
	galaxy.print();

	return 0;
}