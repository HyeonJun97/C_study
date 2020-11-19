#include<iostream>
using namespace std;

void copy(int *A, int *B, int n);
const int n = 5;

int main()
{
	int a[n] = { 1,2,3,4,5 };
	int b[n] = {};

	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	copy(a, b, n);

	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	return 0;
}

void copy(int *A, int *B, int n)
{
	for (int i = 0; i < n; i++)
	{
		*(B+i) = *(A+i);
	}
}