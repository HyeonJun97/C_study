#include<iostream>
using namespace std;

int ipower(int n, int k);

int main()
{
	int a, b, result;

	cout << "�ŵ����� ��� �Լ�(n�� k��): ";
	cin >> a >> b;

	result=ipower(a, b);

	cout << result << endl;

	return 0;
}

int ipower(int n, int k)
{
	return pow(n,k);
}