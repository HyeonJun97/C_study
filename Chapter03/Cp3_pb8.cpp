#include<iostream>
using namespace std;

int main()
{
	char x;
	int code;

	cout << "���ڸ� �Է��Ͻÿ� :";
	cin >> x;

	code = x;

	if (code > 96 && code < 123)
	{
		cout << "�빮�ڸ� �Է��ϼ���.";
		return 0;
	}

	else
	{
		code =code + 32;
		x = code;
	}

	cout << "�Է��� ���ڴ� " << x << "�Դϴ�." << endl;


	return 0;
}