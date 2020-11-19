#include<iostream>
#include<string>
using namespace std;

class date
{
private:
	int year;
	int month;
	int day;

public:
	int getyear();
	void setyear(int y);
	int getmonth();
	void setmonth(int m);
	int getday();
	void setday(int d);
	void print();
};

int date::getyear()
{
	return year;
}

void date::setyear(int y)
{
	year = y;
}

int date::getmonth()
{
	return month;
}

void date::setmonth(int m)
{
	month=m;
}

int date::getday()
{
	return day;
}

void date::setday(int d)
{
	day= d;
}

void date::print()
{
	cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << endl;
}

int main()
{
	date date;

	date.setyear(2010);
	date.setmonth(1);
	date.setday(20);
	date.print();

	return 0;
}