#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream is;
	is.open("expr6.txt");
	if (is.fail())
	{
		cerr<<"���� ���¿� ����"<<endl;
		exit(1);
	}

	char c;
	int w=0, v=0, s=0;

	while (!is.eof())
	{
		is.get(c);
		
		if (c != ' ' && c!='\n')
			w++;

		if(c==' ')
			v++;

		if (c == '\n')
		{
			s++;
			v++;
		}

		if (is.eof()==true)
		{
			w--;
			s++;
			v++;
		}

	}

	cout<<"���ڼ�: "<<w<<endl;
	cout<<"�ܾ��: "<<v<<endl;
	cout<<"�����: "<<s<<endl;

	return 0;
}