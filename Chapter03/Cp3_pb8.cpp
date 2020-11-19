#include<iostream>
using namespace std;

int main()
{
	char x;
	int code;

	cout << "문자를 입력하시오 :";
	cin >> x;

	code = x;

	if (code > 96 && code < 123)
	{
		cout << "대문자를 입력하세요.";
		return 0;
	}

	else
	{
		code =code + 32;
		x = code;
	}

	cout << "입력한 문자는 " << x << "입니다." << endl;


	return 0;
}