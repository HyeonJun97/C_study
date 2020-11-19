#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	cout << "문자열을 입력하세요: ";
	getline(cin, s1);
	int length = s1.length();
	int count = 1;

	for (int i = 0; i < length; i++)
	{
		if(s1[i]==' ')
			count++;
	}

	cout<< "단어의 개수는 "<<count<<"개입니다."<<endl;

	return 0;
}