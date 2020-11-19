#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	cout << "문자열을 입력하세요:(영어소문자) ";
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

	cout<<"자음 : "<<c2<<"개, 모음 : "<<c1<<"개"<<endl;

	return 0;
}