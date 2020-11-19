#include<iostream>
using namespace std;

int main()
{
	int binary[64];
	int num;
	int count=0;

	cout << "10진수->2진수 변환할 수: ";
	cin >> num;

	for (int i = 0; i < 64 ;i++)
	{
		binary[i] = num % 2;
		num = num / 2;
		count += 1;

		if (num == 0)
			break;

	}

	for (int j = count-1; j >=0 ; j--)
		cout << binary[j];

	return 0;
}