#include<iostream>
using namespace std;

int main()
{
	int n, r, i;
	int p=1;

	cout << "���� �ٸ� n������ r���� ���Ͽ� �����ϴ� ���"<<endl;
	cout << "n�� �Է��ϼ���: ";
	cin >> n;
	cout << "r�� �Է��ϼ���: ";
	cin >> r;

	for (i = 0; i<r; i++)
	{
		p = p * n;
		n = n - 1;
	}

	cout << "nPr = " << p << "�Դϴ�" << endl;

	return 0;
}