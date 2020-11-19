#include<iostream>
using namespace std;

int main()
{
	int x, mul=1, i;

	cout << "팩토리얼을 할 수를 입력하세요: ";
	cin >> x;

	for (i = 1; i < x+1; i++)
	{
		mul = mul * i;
	}

	cout << x << "!은 " << mul << "입니다." << endl;

	return 0;
}
