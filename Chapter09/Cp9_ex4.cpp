#include<iostream>
#include<string>
using namespace std;

class product
{
private:
	int id;
	string name;
	int price;

public:
	void input();
	void print();
	bool ischeaper(product other);
};

void product::input()
{
	cout<<"��ǰ�� �Ϸ� ��ȣ: ";
	cin>>id;
	cout<<"��ǰ�� �̸�: ";
	cin >> name;
	cout<<"��ǰ�� ����: ";
	cin>>price;
}

void product::print()
{
	cout<<"��ǰ ��ȣ"<<id<<endl<<"��ǰ�� �̸�: "<<name<<endl<<"��ǰ�� ����: "<<price<<endl;;
}

bool product::ischeaper(product other)
{
	if (price < other.price)
		return true;
	else
		return false;
}

int main()
{
	product p1, p2;

	p1.input();
	p2.input();
	if (p1.ischeaper(p2))
	{
		p1.print();
		cout << "�� �� �Դϴ�" << endl;
	}
	else
	{
		p2.print();
		cout << "�� �� �Դϴ�" << endl;
	}

	return 0;
}
