#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	double anw1, anw2;

	cout << "x^2�� ����� �Է��Ͻÿ�: ";
	cin >> a;
	cout << "x�� ����� �Է��Ͻÿ�: ";
	cin >> b;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> c;

	anw1 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2 * a);
	anw2 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2 * a);

	cout << "�������� ���� " << anw1 << " , " << anw2 << " �Դϴ�.";

	return 0;
}