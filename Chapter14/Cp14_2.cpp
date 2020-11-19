#include<iostream>
#include<string>
using namespace std;

class Homeappliance
{
	double price;
public:
	Homeappliance(double p = 0) : price(p) {}
	void setprice(double p) {price = p;}
	virtual double getprice() {return price;}
	void print() {cout<< "����: "<<price<<endl; }
};

class Television : public Homeappliance
{
	string name;
	string maker;
public:
	Television(double p = 0, string n = " ", string m = " ") : Homeappliance(p), name(n), maker(m) {}
	void setname(string n) {name=n;}
	string getname() {return name;}
	void setmaker(string m) {maker=m;}
	string getmaker() {return maker;}
	void print()
	{
		cout<<"�𵨸�: "<<name<<endl;
		cout<<"����Ŀ: "<<maker<<endl;
		Homeappliance::print();
	}
};

class Refrigerator : public Homeappliance
{
	string name;
	string maker;
public:
	Refrigerator(double p = 0, string n = " ", string m = " ") : Homeappliance(p), name(n), maker(m) {}
	void setname(string n) { name = n; }
	string getname() { return name; }
	void setmaker(string m) { maker = m; }
	string getmaker() { return maker; }
	void print()
	{
		cout << "�𵨸�: " << name << endl;
		cout << "����Ŀ: " << maker << endl;
		Homeappliance::print();
	}
};

int main()
{
	Television t1(100000, "TV1001", "SAMSUNG");
	Refrigerator r1(300000, "RF1040", "LG");
	t1.print();
	cout<<endl;
	r1.print();

	return 0;
}