#include<iostream>
using namespace std;

int main()
{
	int arr[20];
	int num, count, avg, v;
	int sum = 0, powsum = 0;

	cout << "�Է��� �Ǽ��� ����(20������): ";
	cin >> count;
	cout << "�Ǽ� �Է�: ";
	
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

	cout << "���: " << avg << endl << "�л�: " << sqrt(v) << endl;
	return 0;
}