#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	cout << "���ڿ��� �Է��ϼ���:(����ҹ���) ";
	getline(cin, s1);
	int length = s1.length();
	int c1=0;
	int c2=0;

	for (int i = 0; i < length; i++)
	{
		if(s1[i]=='a' || s1[i] =='i' || s1[i]=='o' || s1[i]=='e' || s1[i] == 'u')
			c1++;
		else
			c2++;
	}

	cout<<"���� : "<<c2<<"��, ���� : "<<c1<<"��"<<endl;

	return 0;
}