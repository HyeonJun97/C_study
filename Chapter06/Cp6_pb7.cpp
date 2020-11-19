#include<iostream>
using namespace std;

int *search(int *A, int x);

int main()
{
	int a[] = { 2,4,6,8,10,12,14,16,18,20 };
	int x;
	
	cout << "Å½»ö ÇÒ ¼ıÀÚ: ";
	cin >> x;
	
	cout << "A[10] = ";
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << *search(a, x)<<endl;

	return 0;
}

int *search(int *A, int x)
{
	for (int i = 0; i < 10; i++)
	{
		if (A[i] == x)
		{
			return &A[i];
			break;
		}
	}
}