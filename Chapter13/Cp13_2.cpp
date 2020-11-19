#include<iostream>
#include<string>
using namespace std;

class Person
{
	string name;
	string address;
	string phone;
public:
	Person(string n = " ", string a = " ", string p = " ") : name(n), address(a), phone(p) {}
	void setname(string n) {name=n;}
	string getname() {return name;}
	void setaddress(string a) {address=a;}
	string getaddress() {return address;}
	void setphone(string p) {phone=p;}
	string getphone() {return phone;}
};

class Customer : public Person
{
	int number;
	int point;
public:
	Customer(string n = " ", string a = " ", string p = " ", int nb = 0, int pt = 0) : Person(n, a, p), number(nb), point(pt) {}
	void setnumber(int nb) {number=nb;}
	int getnumber() {return number;}
	void setpoint(int pt) {point =pt;}
	int getpoint() {return point;}
	void display();
};

void Customer::display()
{
	cout<<this->getname()<<endl;
	cout<<this->getaddress()<<endl;
	cout<<this->getphone()<<endl;
	cout<<this->getnumber()<<endl;
	cout<<this->getpoint()<<endl;
}

int main()
{
	Customer c1("KKK", "Seoul", "010-1111-1111", 1234, 1000);
	c1.display();

	return 0;
}