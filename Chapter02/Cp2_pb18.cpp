#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	double anw1, anw2;

	cout << "x^2의 계수를 입력하시오: ";
	cin >> a;
	cout << "x의 계수를 입력하시오: ";
	cin >> b;
	cout << "상수계수를 입력하시오: ";
	cin >> c;

	anw1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2 * a);
	anw2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2 * a);

	cout << "방정식의 근은 " << anw1 << " , " << anw2 << " 입니다.";

	return 0;
}