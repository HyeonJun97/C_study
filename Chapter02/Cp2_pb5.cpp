#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	double avg;

	cout << "��ǻ�� ���� ������ ������ �Է��Ͻÿ�: ";
	cin >> a;
	cout << "C��� ���α׷��� ������ ������ �Է��Ͻÿ�: ";
	cin >> b;
	cout << "���� ������ ������ �Է��Ͻÿ�: ";
	cin >> c;
	cout << "�Ϲ� ���� ������ ������ �Է��Ͻÿ�: ";
	cin >> d;

	avg = (double)(a + b + c + d) / 4;

	cout << "��� ������ " << avg << "���Դϴ�." << endl;

	return 0;

}