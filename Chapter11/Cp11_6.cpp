#include<iostream>
#include<string>
using namespace std;

class Date
{
	int year;
	int month;
	int day;
public:
	Date(int y = 0, int m = 0, int d = 0) :year(y), month(m), day(d) {}
	~Date() {}
	void setyear(int y) {year=y;}
	int getyear() { return year; }
	void setmonth(int m){month=m;}
	int getmonth() {return month;}
	void setday(int d){day =d;}
	int getday() {return day;}
	void print() {cout<<year<<"년 "<<month<<"월 "<<day<<"일 "<<endl;}
};

class Employee
{
	string name;
	Date birth;
	Date hire;
public:
	Employee(string name, Date &birth, Date &hire)
	{
		this->name=name;
		this->birth=birth;
		this->hire=hire;
	}
	void print()
	{
		cout<<"이름: "<<name<<endl;
		cout<<"생일: ";
		birth.print();
		cout<<"입사일: ";
		hire.print();
	}
};

int main()
{
	Date birth(1997,2,21);
	Date hire(2016,3,2);
	Employee A("khj", birth, hire);

	A.print();

	return 0;
}