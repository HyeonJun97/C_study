#include<iostream>
using namespace std;

int main()
{
	int x, mul=1, i;

	cout << "���丮���� �� ���� �Է��ϼ���: ";
	cin >> x;

	for (i = 1; i < x+1; i++)
	{
		mul = mul * i;
	}

	cout << x << "!�� " << mul << "�Դϴ�." << endl;

	return 0;
}
