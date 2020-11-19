#include<iostream>
using namespace std;

int f_equal(double x, double y);

int main()
{
	double a, b;

	cout << "실수를 입력하세요 : ";
	cin >> a;
	cout << "실수를 입력하세요 : ";
	cin >> b;

	if (f_equal(a, b) == 1)
		cout << "같음" << endl;
	else
		cout << "다름" << endl;

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