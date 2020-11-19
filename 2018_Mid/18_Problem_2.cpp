#include<iostream>
using namespace std;
#define SIZE 10

int combination(int n, int r);
long factorial(int n);

int main()
{
	int pascal[SIZE][SIZE];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			pascal[i][j] = combination(i, j);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << pascal[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

int combination(int n, int r)
{
	int result;
	result = factorial(n) / (factorial(r)*factorial(n - r));
	return result;
}

long factorial(int n)
{
	long result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}