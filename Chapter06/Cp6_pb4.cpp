#include<iostream>
using namespace std;

void add(int *A, int *B, int *C, int n);
const int n = 5;

int main()
{
	int a[n] = { 1,2,3,4,5 };
	int b[n] = {1,2,3,4,5};
	int c[n] = {};
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
	add(a, b, c, n);
	for (int i = 0; i < 5; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}

void add(int *A, int *B, int *C, int n)
{
	for (int i = 0; i < 5; i++)
	{
		*(C + i) = *(A + i) + *(B + i);
	}
}