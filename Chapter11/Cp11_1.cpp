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
		cout<<"이름: "<<name<<endl;
		if(fr==NULL)
			cout<<"일촌: 없음"<<endl;
		else
			cout<<"일촌: "<<fr->name<<endl;
		cout<<"인기도: "<<p<<endl;
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
		cout<<"친구를 입력하세요: ";
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