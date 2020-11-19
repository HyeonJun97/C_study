#include<iostream>
#include<string>
using namespace std;

class mystring
{
char *pbuf;

public:
	mystring(const char *s=NULL);
	mystring(mystring& s);
	~mystring();

	void print();
	int getsize();
};

mystring::mystring(const char *s)
{
	if (s == NULL)
	{
		pbuf = new char[1];
		pbuf[0] = NULL;
	}
	else
	{
		pbuf = new char[::strlen(s) + 1];
		strcpy(pbuf, s);
	}
}

mystring::mystring(mystring &s)
{
	pbuf=new char[s.getsize()+1];
	strcpy(pbuf, s.pbuf);
}

mystring::~mystring()
{
	if(pbuf)
		delete [] pbuf;
}

void mystring::print()
{
	cout<<pbuf<<endl;
}

int mystring::getsize()
{
	return strlen(pbuf);
}

int main()
{
	mystring str1;
	mystring str2("hello");
	mystring str3="world!";
	mystring str4(str3);

	str1.print();
	str2.print();
	str3.print();
	str4.print();

	return 0;
}