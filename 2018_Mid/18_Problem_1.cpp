#include<iostream>
using namespace std;

int f_equal(double x, double y);

int main()
{
	double a, b;

	cout << "�Ǽ��� �Է��ϼ��� : ";
	cin >> a;
	cout << "�Ǽ��� �Է��ϼ��� : ";
	cin >> b;

	if (f_equal(a, b) == 1)
		cout << "����" << endl;
	else
		cout << "�ٸ�" << endl;

	return 0;
}

double f_abs(double x)
{
	if (x > 0)
		return x;
	else
		return -x;
}

double f_min(double x, double y)
{
	if (x > y)
		return y;
	else
		return x;
}

int f_equal(double x, double y)
{
	int e = 0.000001;

	double h;
	double t;

	h = f_abs(x - y);
	t = f_min(f_abs(x), f_abs(y));

	if ((double)h / t < e)
		return 1;
	else
		return 0;
}