#include<iostream>
using namespace std;

void scalar_mult(int a[][3], int scalar);
//void sub(int a[][3], int b[][3]);
//void transpose(int a[][3], int b[][3]);

int main()
{
	int arr1[3][3], arr2[3][3];
	int n, scalar;

	cout << "arr1 입력: " << endl;;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			cin >> n;
			arr1[x][y] = n;
		}
	}
	cout << "scalar 입력: ";
	cin >> scalar;

	scalar_mult(arr1, scalar);
	return 0;
}

void scalar_mult(int a[][3], int scalar)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			a[i][j] *= scalar;
		}
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
			cout << a[x][y] << " ";
		cout << endl;
	}
}