#include<iostream>
#include<string>
using namespace std;

class Bankacct
{
	double money;
	double rate;
	double interest;
public:
	Bankacct(double m) { money = m;}
	void deposit(double m) {money+=m;}
	void withdraw(double m) {money-=m;}
	void setrate(double r) {rate =r;}
	virtual double getinterest() { return money*rate;}
	void print() {cout<<"���ݾ�: "<<money<<endl;}
};

class Savingacct : public Bankacct
{
public:
	Savingacct(int m) : Bankacct(m)
	{
		setrate(0.09);
	}
	void print()
	{
		cout<<"���� ���� ����"<<endl;
		Bankacct::print();
	}
};

class Checkingacct : public Bankacct
{
public:
	Checkingacct(int m) : Bankacct(m)
	{
		setrate(0.05);
	}
	void print()
	{
		cout<<"���� ���� ����"<<endl;
		Bankacct::print();
	}
};

int main()
{
	Savingacct s1(50000);
	Checkingacct s2(50000);
	s1.deposit(10000);
	s2.withdraw(10000);
	s1.print();
	cout<<"���ھ�: "<<s1.getinterest()<<endl;
	s2.print();
	cout<<"���ھ�: "<<s2.getinterest()<<endl;

	return 0;
}