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
		cout<<"번호    이름       전화번호     이메일"<<endl;
		cout<<" "<<number<<"    "<<name<<"	"<<phone<<"	"<<email<<endl;
	}
};

int main()
{
	ofstream os;
	os.open("resultpr3.txt");
	if (os.fail())
	{
		cerr<<"파일 오픈에 실패하였습니다. "<<endl;
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
		cout<<"번호를 입력하세요: ";
		cin>>number;
		cout<<"이름을 입력하세요: ";
		cin>>name;
		cout<<"전화번호를 입력하세요: ";
		cin>>phone;
		cout<<"이메일주소를 입력하세요: ";
		cin>>email;
		u[i].setuser(number, name, phone, email);
		os<<number<<"		"<<name<<"		"<<phone<<"		"<<email<<endl;
		cout<<"종료?(Y/N)";
		cin>>check;

		if(check=='Y' || check=='y')
			break;

		i++;
	}

	int findnum;
	cout<<"번호를 입력하세요: ";
	cin>>findnum;

	for (int j = 0; j <= i; j++)
	{
		if(u[j].getusernumber()==findnum)
			u[j].print();
	}

	os.close();
	return 0;
}