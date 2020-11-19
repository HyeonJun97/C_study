#include <iostream>
#include <string>

using namespace std;

class Book
{
protected:
	int number;	//관리번호
	string title;	//제목
	string author;	//저자

public:
	Book(int n, string t, string a)
	{
		number = n;
		title = t;
		author = a;
	};

	virtual int getRentalFees(int days) = 0;

	void print()
	{
		cout<<"관리번호 : "<<number<<endl;
		cout<<"제    목 : "<<title<<endl;
		cout<<"저    자 : "<<author<<endl;
	}
};


class Novel : public Book
{
public:
	Novel(int n, string t, string a) : Book(n, t, a) {}

	int getRentalFees(int days)
	{
		return 300*days;
	};
};


class Poet : public Book
{

public:
	Poet(int n, string t, string a) : Book(n, t, a) {}
	int getRentalFees(int days)
	{
		return 200*days;
	}
};


class ScienceFiction : public Book
{
public:
	ScienceFiction(int n, string t, string a) : Book(n, t, a) {}
	int getRentalFees(int days)
	{
		return 600*days;
	}
};


int main()
{
	Book *b1=new Novel(130710, "7년후", "기욤뮈소");
	Book *b2=new Poet(280292, "꽃을 보듯 너를 본다", "나태주");
	Book *b3=new ScienceFiction(921073, "평행우주", "미치오 카쿠");

	b1->print();
	cout << b1->getRentalFees(3) << "원" << endl;
	b2->print();
	cout << b2->getRentalFees(4) << "원" << endl;
	b3->print();
	cout << b3->getRentalFees(5) << "원" << endl;
	return 0;
}