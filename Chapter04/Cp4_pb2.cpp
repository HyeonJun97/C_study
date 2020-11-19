#include<iostream>
using namespace std;

void prime(int n);

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		prime(i);
	}

	return 0;
}

void prime(int n)
{
	int count = 0;

	for (int i = 2; i <= n; i++)
	{
		if (n%i == 0)
			count++;
	}
	if (count == 1)
		cout << n << " ";
}