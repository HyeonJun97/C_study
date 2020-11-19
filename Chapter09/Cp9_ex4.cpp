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
	cout<<"상품의 일련 번호: ";
	cin>>id;
	cout<<"상품의 이름: ";
	cin >> name;
	cout<<"상품의 가격: ";
	cin>>price;
}

void product::print()
{
	cout<<"상품 번호"<<id<<endl<<"상품의 이름: "<<name<<endl<<"상품의 가격: "<<price<<endl;;
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
		cout << "이 더 쌉니다" << endl;
	}
	else
	{
		p2.print();
		cout << "이 더 쌉니다" << endl;
	}

	return 0;
}
