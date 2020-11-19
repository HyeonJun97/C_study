#include<iostream>
using namespace std;

int main()
{
	int arr[20];
	int num, count, avg, v;
	int sum = 0, powsum = 0;

	cout << "입력할 실수의 개수(20개이하): ";
	cin >> count;
	cout << "실수 입력: ";
	
	for (int i = 0; i < count; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	for (int j = 0; j < count; j++)
		sum += arr[j];
	avg = sum / count;

	for (int k = 0; k < count; k++)
		powsum += pow(arr[k] - avg, 2);

	v = powsum / count;

	cout << "평균: " << avg << endl << "분산: " << sqrt(v) << endl;
	return 0;
}