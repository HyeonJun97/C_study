#include<iostream>
using namespace std;

void get_divisor(int num);

int main()
{
	int n;
	cout << "약수찾기: ";
	cin >> n;

	get_divisor(n);

	return 0;
}

void get_divisor(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if(num%i==0)
			cout << i <<" ";
	}
}