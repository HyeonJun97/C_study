#include<iostream>
using namespace std;

int main()  //2��->10��
{
	int x, i;
	int sum = 0;

	cout << "2������ �Է��Ͻÿ�: ";
	cin >> x;

	for (i = 0; ; i++)
	{
		int y;
		y = x % 10;
		sum = sum + y * pow(2, i);
		x = x / 10;

		if (x == 0)
			break;
	}

	cout << "10���� ���� " <<sum<< "�Դϴ�." << endl;

	return 0;

}

int main() //10��->2��
{
	int x, i;
	int y;
	int sum=0;

	cout << "10������ �Է��Ͻÿ�: ";
	cin >> x;

	for (i = 0; ; i++)
	{
		y = x % 2;
		x = x / 2;

		sum = sum + y * pow(10, i);
		
		if (x == 0)
			break;
	}

	cout << "2���� ���� " << sum << "�Դϴ�." << endl;

	return 0;
}