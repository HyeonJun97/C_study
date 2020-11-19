#include<iostream>
using namespace std;

void merge(int *A, int *B, int *C);

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 0,2,4,6,10 };
	int c[10];
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
	merge(a, b, c);
	for (int i = 0; i < 10; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}

void merge(int *A, int *B, int *C)
{
	int i=0;
	int j=0;
	int k = 0;

	for (int a = 0; a < 10; a++)
	{
		if (i == 5 && j != 5)
		{
			for (j; j < 5; j++)
			{
				C[k] = B[j];
				k++;
			}
		}
		else if (i != 5 && j == 5)
		{
			for (i; i < 5; j++)
			{
				C[k] = A[i];
				k++;
			}
		}
		else
		{
			if (A[i] >= B[j])
			{
				C[k] = B[j];
				j++;
				k++;
			}
			else
			{
				C[k] = A[i];
				i++;
				k++;
			}
		}
	}
}