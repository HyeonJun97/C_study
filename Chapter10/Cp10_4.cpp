#include<iostream>
#include<string>
using namespace std;

class Nation
{
	string name;
	int pop;
	int area;
	int gdp;
public:
	Nation()
	{
		name="한국";
		pop=20000;
		area=20000;
		gdp=20000;
	}
	Nation(string a, int b, int c, int d)
	{
		name=a;
		pop=b;
		area=c;
		gdp=d;
	}
	void setname(string n);
	string getname();
	void setpop(int p);
	int getpop();
	void setarea(int a);
	int getarea();
	void getgdp(int g);
	int setgdp();
	void print();
};

void Nation::setname(string n) { name= n ;}
string Nation::getname() { return name ;}
void Nation::setpop(int p) {pop=p;}
int Nation::getpop() { return pop; }
void Nation::setarea(int a) {area= a;}
int Nation::getarea(){return area;}
void Nation::getgdp(int g){gdp=g;}
int Nation::setgdp(){return gdp;}
void Nation::print()
{
	cout<<"이름: "<<name<<endl;
	cout<<"인구: "<<pop<<endl;
	cout<<"면적: "<<area<<endl;
	cout<<"소득: "<<gdp<<endl;
}

int main()
{
	Nation n1;
	Nation n2("일본", 10000, 10000, 10000);
	Nation n3("중국", 30000, 30000, 30000);

	int s1 = n1.getpop();
	int s2 = n2.getpop();
	int s3 = n3.getpop();

	cout<<"인구 최대 국가"<<endl;

	if (s1 < s2)
	{
		if (s2 < s3)
			n3.print();
		else
			n2.print();
	}
	else
	{
		if (s1 < s3)
			n3.print();
		else
			n1.print();
	}
}