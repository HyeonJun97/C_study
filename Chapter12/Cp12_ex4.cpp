#include<iostream>
#include<cstring>
#include<string>
using namespace std;  //복사생성자X 오류??

class Mystring
{
private:
	char *pbuf;
public:
	Mystring(const char *s=NULL);
	Mystring(Mystring &s);
	~Mystring();
	void print() {cout<< pbuf<<endl;}
	int getsize() {return strlen(pbuf); }
	Mystring operator+(Mystring &s);
};

Mystring::Mystring(const char *s)
{
	if (s == NULL)
	{
		pbuf=new char[1];
		pbuf[0]=NULL;
	}
	else
	{
		pbuf=new char[::strlen(s)+1];
		strcpy_s(pbuf, 100, s);
	}
}

Mystring::Mystring(Mystring &s)
{
	pbuf=new char[s.getsize()+1];
	strcpy_s(pbuf, 100, s.pbuf);
}

Mystring::~Mystring()
{
	if(pbuf)
		delete [] pbuf;
}

Mystring Mystring::operator+(Mystring &s)
{
	char *temp=new char[getsize()+s.getsize()+1];
	strcpy_s(temp, 100, pbuf);
	strcat_s(temp, 100, s.pbuf);
	Mystring r(temp);
	delete [] temp;
	return r;
}

int main()
{
	Mystring s1("hello");
	Mystring s2("world!");
	Mystring s3 = s1 + s2;

	s1.print();
	s2.print();
	s3.print();

	return 0;
}