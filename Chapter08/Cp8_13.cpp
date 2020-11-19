#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	string find;
	string change;
	cout << "문자열을 입력하세요:(최대 100글자) ";
	getline(cin, s1);
	cout<<"찾을 문자열을 입력하세요:(최대 10글자)";
	getline(cin, find);

	int pos = s1.find(find);
	while (1)
	{
		if (pos == string::npos)
		{
			cout << "잘못된 문장입니다. 다시 입력하세요: ";
			getline(cin, find);
		}
		else
			break;
	}
	int length = find.length();

	cout<<"바꿀 문자열을 입력하세요:(최대 10글자)";
	getline(cin, change);

	s1.erase(pos, length);
	s1.insert(pos, change);
	
	cout<<s1<<endl;

	return 0;
}