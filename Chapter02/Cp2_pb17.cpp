#include<iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "x��ǥ�� �Է��Ͻÿ�: ";
	cin >> x;
	cout << "y��ǥ�� �Է��Ͻÿ�: ";
	cin >> y;

	if (x > 0)
	{
		if (y > 0)
			cout << "1��и� ��ǥ�Դϴ�." << endl;
		else
			cout << "4��и� ��ǥ�Դϴ�." << endl;
	}
	else
	{
		if (y > 0)
			cout << "2��и� ��ǥ�Դϴ�." << endl;
		else
			cout << "3��и� ��ǥ�Դϴ�." << endl;
	}
	return 0;
}