#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	cout<<"���ڿ��� �Է��ϼ���: ";
	getline(cin,s1);
	int length=s1.length();

	for (length; length >0; length--)
		cout<<s1[length-1];

	return 0;
}