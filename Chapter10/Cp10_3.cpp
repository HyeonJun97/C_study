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
	cout<<"이름: "<<name<<endl;
	cout<<"감독: "<<director<<endl;
	cout<<"평점: "<<score<<endl;
}
Movie::Movie()
{
	name="어벤져스";
	director="마블";
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
	Movie m2("아이언맨","마블",7);
	Movie m3("캡틴","마블",5);

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
