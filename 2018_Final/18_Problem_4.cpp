#include <iostream>
#include <string>

using namespace std;

class Book
{
protected:
	int number;	//������ȣ
	string title;	//����
	string author;	//����

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
		cout<<"������ȣ : "<<number<<endl;
		cout<<"��    �� : "<<title<<endl;
		cout<<"��    �� : "<<author<<endl;
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
	Book *b1=new Novel(130710, "7����", "��蹿��");
	Book *b2=new Poet(280292, "���� ���� �ʸ� ����", "������");
	Book *b3=new ScienceFiction(921073, "�������", "��ġ�� ī��");

	b1->print();
	cout << b1->getRentalFees(3) << "��" << endl;
	b2->print();
	cout << b2->getRentalFees(4) << "��" << endl;
	b3->print();
	cout << b3->getRentalFees(5) << "��" << endl;
	return 0;
}