#include<iostream>
#include<string>
using namespace std;

class String  //안돌아감
{
	char *s;
public:
	String(char *p)
	{
		s = new char[strlen(p)+1];
		strcpy(s, p);
	}
	virtual ~String()  //소멸자 문제 해결
	{
		cout<<"String() 소멸자"<<endl;
		delete [] s;
	}
};

class Mystring : public String
{
	char *header;
public:
	Mystring(char *h, char *p) : String(p)
	{
		header=new char[strlen(h)+1];
		strcpy(header, h);
	}
	~Mystring()
	{
		cout<<"Mystring() 소멸자"<<endl;
		delete [] header;
	}
};

int main()
{
	cout<< "자식 클래스 포인터 이용"<<endl;
	Mystring *s1 = new Mystring("//////", "Hello World!");
	delete s1;
	cout<<endl;

	cout<<"부포 클래스 포인터 이용"<<endl;
	String *s2 = new Mystring("*****", "Hello World!");
	delete s2;

	return 0;
}