#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	cout<<"���ڿ��� �Է��ϼ���: ";
	getline(cin, s1);

	int length=s1.length();

	int acount=0; 
	int ncount=0; 
	int scount=0;

	for (int i = 0; i < length; i++)
	{
		if(s1[i]==' ')
			scount++;
		else if(s1[i]>='0' && s1[i]<='9')
			ncount++;
		else if(s1[i]>='A' && s1[i]<='Z' || s1[i]>='a' && s1[i]<='z')
			acount++;
	}

	cout<<"���ĺ�: "<<acount<<"��, ����: "<<ncount<<"��, ����: "<<scount<<"���Դϴ�."<<endl;

	return 0;
}