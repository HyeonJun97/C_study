#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 1;
	int c;
	int i = 0;

	cout << "�Ǻ���ġ ���� ����ϱ�" << endl;
	cout << a << " ";

	for (i = 0; i < 30; i++)
	{
		c = a + b;
		a = b;
		b = c;

		cout << a <<" ";

	}

	return 0;
}