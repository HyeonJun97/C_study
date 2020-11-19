#include<iostream>
#include<string>
using namespace std;

class Movie
{
	string name;
	string director;
	int score;
public:
	void setname(string n);
	string getname();
	void setdirector(string d);
	string getdirector();
	void setscore(int s);
	int getscore();
	void print();
	Movie();
	Movie(string a, string b, int c);
};

void Movie::setname(string n) { name=n;}
string Movie::getname() { return name; }
void Movie::setdirector(string d) {director=d;}
string Movie::getdirector() { return director; }
void Movie::setscore(int s) { score = s;}
int Movie::getscore() {return score;}
void Movie::print()
{
	cout<<"�̸�: "<<name<<endl;
	cout<<"����: "<<director<<endl;
	cout<<"����: "<<score<<endl;
}
Movie::Movie()
{
	name="�����";
	director="����";
	score=9;
}
Movie::Movie(string a, string b, int c)
{
	name=a;
	director=b;
	score=c;
}

int main()
{
	Movie m1;
	Movie m2("���̾��","����",7);
	Movie m3("ĸƾ","����",5);

	int s1=m1.getscore();
	int s2=m2.getscore();
	int s3=m3.getscore();

	if (s1 < s2)
	{
		if (s2 < s3)
			m3.print();
		else
			m2.print();
	}
	else
	{
		if (s1 < s3)
			m3.print();
		else
			m1.print();
	}
	return 0;
}
