#include<iostream>
#define Max_SIZE 10

using namespace std;
void print(int *A, int size);
int *search(int *A, int n);

int main()
{
	int a[Max_SIZE] = { 1,2,4,7,9,8,3,10,5,6 }, n = 0, *ps = NULL;
	print(a, Max_SIZE);

	cout << "탐색할 인덱스를 입력하시오 : ";
	cin >> n;

	ps = search(a, n);

	if (*ps == -1)
	{
		cout << "배열의 범위를 벗어 납니다." << endl;
	}
	else
	{
		cout << "찾았습니다 : " << *ps << endl;
	}
	return 0;
}

int *search(int *A, int n)
{
	int x = -1;
	for (int i = 0; i < Max_SIZE; i++)
	{
		if (A[i] == n)
			x = i + 1;
	}
	return &x;
}

void print(int *A, int size)
{
	cout << "A[] = { ";
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << "}" << endl;
}