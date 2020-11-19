#include<iostream>
using namespace std;

const int n = 10;
void reverse(int *A, int n);

int main()
{
	int a[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	reverse(a, n);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
}

void reverse(int *A, int n)
{
	int m=0;
	for (int i = 0; i < (n / 2); i++)
	{
		 m= A[i];
		A[i] = A[n-i-1];
		A[n-i-1] = m;
	}
}