#include<iostream>
#include<string>
using namespace std;

class String  //�ȵ��ư�
{
	char *s;
public:
	String(char *p)
	{
		s = new char[strlen(p)+1];
		strcpy(s, p);
	}
	virtual ~String()  //�Ҹ��� ���� �ذ�
	{
		cout<<"String() �Ҹ���"<<endl;
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
		cout<<"Mystring() �Ҹ���"<<endl;
		delete [] header;
	}
};

int main()
{
	cout<< "�ڽ� Ŭ���� ������ �̿�"<<endl;
	Mystring *s1 = new Mystring("//////", "Hello World!");
	delete s1;
	cout<<endl;

	cout<<"���� Ŭ���� ������ �̿�"<<endl;
	String *s2 = new Mystring("*****", "Hello World!");
	delete s2;

	return 0;
}