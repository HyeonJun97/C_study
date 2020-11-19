#include<iostream>
#include<string>
using namespace std;

class Myworld
{
private:
	string name;
	Myworld *fr;
	int p;
public:
	Myworld()
	{
		name = "";
		fr = NULL;
		p = 0;
	}
	Myworld(string n, Myworld *tt, int i) { name = n; fr = tt; p = i; }
	void setname(string n) { name = n; }
	string getname() { return name; }
	void setfr(Myworld *tt) { fr = tt; }
	Myworld *getfr() { return fr; }
	~Myworld() {delete fr;}
	void setp() { p++;}
	int getp(){return p;}
	void print()
	{
		cout<<"�̸�: "<<name<<endl;
		if(fr==NULL)
			cout<<"����: ����"<<endl;
		else
			cout<<"����: "<<fr->name<<endl;
		cout<<"�α⵵: "<<p<<endl;
	}
};

int main()
{
	string n[3] = { "AAA", "BBB", "CCC" };
	string tmp;
	Myworld P[4];

	for (int i = 0; i < 3; i++)
	{
		P[i].setname(n[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		P[i].print();
		cout<<"ģ���� �Է��ϼ���: ";
		cin>>tmp;
		for (int j = 0; j < 3; j++)
		{
			if (tmp == P[j].getname())
			{
				P[i].setfr(&P[j]);
				P[i].setp();
				break;
			}
		}
	}

	for (int i = 0; i < 3; i++)
		P[i].print();

	return 0;
}