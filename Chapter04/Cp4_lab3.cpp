#include<iostream>
using namespace std;

double dist_2d(int x, int y, int z, int w);

int main()
{
	int x1, y1, x2, y2;

	cout << "��(x1, y1)�� �Է��ϼ���: ";
	cin >> x1;
	cin >> y1;
	cout << "��(x2, y2)�� �Է��ϼ���: ";
	cin >> x2;
	cin >> y2;

	cout << "�� ���� �Ÿ��� "<< dist_2d(x1, y1, x2, y2) <<"�Դϴ�."<<endl;

	return 0;
}

double dist_2d(int x, int y, int z, int w)
{
	double d;
	d=sqrt(pow(x-z,2)+pow(y-w,2));

	return d;
}