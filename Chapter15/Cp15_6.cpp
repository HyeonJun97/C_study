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
		cerr<<"파일 오픈에 실패"<<endl;
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

	cout<<"문자수: "<<w<<endl;
	cout<<"단어수: "<<v<<endl;
	cout<<"문장수: "<<s<<endl;

	return 0;
}