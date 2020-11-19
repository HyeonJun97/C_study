#include<iostream>
using namespace std;

int main()
{
	int x;
	int a, b, c, d;


	cout << "정수를 입력하시오: ";
	cin >> x;

	a = x / 1000;
	x = x % 1000;
	b = x / 100;
	x = x % 100;
	c = x / 10;
	x = x % 10;
	d = x;

	cout << "천의 자리: " << a << endl;
	cout << "백의 자리: " << b << endl; 
	cout << "십의 자리: " << c << endl;
	cout << "일의 자리: " << d << endl;

	return 0;

}