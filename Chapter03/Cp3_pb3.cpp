#include<iostream>
using namespace std;

int main()  //2진->10진
{
	int x, i;
	int sum = 0;

	cout << "2진수를 입력하시오: ";
	cin >> x;

	for (i = 0; ; i++)
	{
		int y;
		y = x % 10;
		sum = sum + y * pow(2, i);
		x = x / 10;

		if (x == 0)
			break;
	}

	cout << "10진수 값은 " <<sum<< "입니다." << endl;

	return 0;

}

int main() //10진->2진
{
	int x, i;
	int y;
	int sum=0;

	cout << "10진수를 입력하시오: ";
	cin >> x;

	for (i = 0; ; i++)
	{
		y = x % 2;
		x = x / 2;

		sum = sum + y * pow(10, i);
		
		if (x == 0)
			break;
	}

	cout << "2진수 값은 " << sum << "입니다." << endl;

	return 0;
}