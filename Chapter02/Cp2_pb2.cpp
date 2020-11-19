#include<iostream>
using namespace std;

int main()
{
	int x, a;

	cout << "3x^3-7x^2+9의 값 구하기" << endl;

	cout << "x값을 입력하세요: ";
	cin >> x;

	a = (3 * x*x*x) - (7 * x*x) + 9;

	cout << "다항식의 값 : " << a << endl;

	return 0;

	

}