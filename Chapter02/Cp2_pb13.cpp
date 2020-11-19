#include<iostream>
using namespace std;

int main()
{
	int x;
	double y;

	cout << "섭씨온도를 입력하시오: ";
	cin >> x;

	y = x + 273.16;

	cout << "절대온도는 " << y << "입니다." << endl;

	return 0;
}
