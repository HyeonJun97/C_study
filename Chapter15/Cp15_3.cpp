#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class user
{
	int number;
	string name;
	string phone;
	string email;
public:
	int getusernumber() { return number;}
	void setuser(int n, string na, string p, string e)
	{
		number=n;
		name=na;
		phone=p;
		email=e;
	}
	void print()
	{
		cout<<"��ȣ    �̸�       ��ȭ��ȣ     �̸���"<<endl;
		cout<<" "<<number<<"    "<<name<<"	"<<phone<<"	"<<email<<endl;
	}
};

int main()
{
	ofstream os;
	os.open("resultpr3.txt");
	if (os.fail())
	{
		cerr<<"���� ���¿� �����Ͽ����ϴ�. "<<endl;
		exit(1);
	}

	user u[100];
	int number;
	string name;
	string phone;
	string email;
	int i=0;
	char check;

	while (1)
	{
		cout<<"��ȣ�� �Է��ϼ���: ";
		cin>>number;
		cout<<"�̸��� �Է��ϼ���: ";
		cin>>name;
		cout<<"��ȭ��ȣ�� �Է��ϼ���: ";
		cin>>phone;
		cout<<"�̸����ּҸ� �Է��ϼ���: ";
		cin>>email;
		u[i].setuser(number, name, phone, email);
		os<<number<<"		"<<name<<"		"<<phone<<"		"<<email<<endl;
		cout<<"����?(Y/N)";
		cin>>check;

		if(check=='Y' || check=='y')
			break;

		i++;
	}

	int findnum;
	cout<<"��ȣ�� �Է��ϼ���: ";
	cin>>findnum;

	for (int j = 0; j <= i; j++)
	{
		if(u[j].getusernumber()==findnum)
			u[j].print();
	}

	os.close();
	return 0;
}