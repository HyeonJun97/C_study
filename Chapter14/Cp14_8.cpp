#include<iostream>
#include<string>
using namespace std;

class Book
{
	int number;
	string title;
	string author;
public:
	Book(int n = 0, string t = " ", string a = " ") :number(n), title(t), author(a) {}
	void setnumber(int n){number=n;}
	int getnumber(){return number;}
	void settitle(string t) {title=t;}
	string gettitle() {return title;}
	void setauthor(string a){author=a;}
	string getauthor(){return author;}

	bool equals(Book &b)  
	{
		if(number==b.getnumber())
			return true;
		else
			return false;
	}

	virtual int getlatefee(int day) = 0;

	void print()
	{
		cout<<"관리번호: "<<number<<endl;
		cout<<"제목: "<<title<<endl;
		cout<<"저자: "<<author<<endl;
	}
};

class Novel : public Book
{
public:
	Novel(int n = 0, string t = " ", string a = " ") :Book(n, t, a) {}
	int getlatefee(int day) {return day*300;}
};

class Poet : public Book
{
public:
	Poet(int n = 0, string t = " ", string a = " ") :Book(n, t, a) {}
	int getlatefee(int day) { return day * 200; }
};

class ScienceFiction : public Book
{
public:
	ScienceFiction(int n = 0, string t = " ", string a = " ") :Book(n, t, a) {}
	int getlatefee(int day) { return day * 600; }
};

int main()
{
	Novel b1(1000,"소설","작가1");
	Poet b2(1111,"시","시인");
	ScienceFiction b3(1234,"과학","작가2");

	b1.print();
	cout<<"연체료: "<<b1.getlatefee(3)<<"원"<<endl<<endl;
	b2.print();
	cout << "연체료: " << b2.getlatefee(5) << "원" << endl<<endl;
	b3.print();
	cout << "연체료: " << b3.getlatefee(2) << "원" << endl;

	return 0;
}