#include<iostream>
using namespace std;

int main()
{
	int x;
	int a, b, c, d;


	cout << "������ �Է��Ͻÿ�: ";
	cin >> x;

	a = x / 1000;
	x = x % 1000;
	b = x / 100;
	x = x % 100;
	c = x / 10;
	x = x % 10;
	d = x;

	cout << "õ�� �ڸ�: " << a << endl;
	cout << "���� �ڸ�: " << b << endl; 
	cout << "���� �ڸ�: " << c << endl;
	cout << "���� �ڸ�: " << d << endl;

	return 0;

}