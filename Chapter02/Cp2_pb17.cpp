#include<iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "x좌표를 입력하시오: ";
	cin >> x;
	cout << "y좌표를 입력하시오: ";
	cin >> y;

	if (x > 0)
	{
		if (y > 0)
			cout << "1사분면 좌표입니다." << endl;
		else
			cout << "4사분면 좌표입니다." << endl;
	}
	else
	{
		if (y > 0)
			cout << "2사분면 좌표입니다." << endl;
		else
			cout << "3사분면 좌표입니다." << endl;
	}
	return 0;
}