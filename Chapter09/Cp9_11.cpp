#include<iostream>
#include<string>
using namespace std;

class product
{
	string name;
	int price;
	int assesment;
public:
	void getinfo(string n, int p, int a);
	bool isbetter(product another);
	void print();
};

void product::getinfo(string n, int p, int a)
{
	name=n;
	price=p;
	assesment=a;
}

bool product::isbetter(product another)
{
	if(assesment<another.assesment)
		return true;
	else
		return false;
}

void product::print()
{
	cout<<"��ǰ �̸�: "<<name<<endl;
	cout<<"��ǰ ����: "<<price<<endl;
	cout<<"��ǰ ��: "<<assesment<<endl;
}

int main()
{
	product p1,p2;
	p1.getinfo("������1",50000,4);
	p2.getinfo("������2",60000,3);

	p1.print();
	p2.print();

	cout << p1.isbetter(p2)<<endl;

	return 0;
}