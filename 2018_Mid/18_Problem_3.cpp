#include<iostream>
#include<ctime>
using namespace std;
#define SIZE 80
#define MAX 10

void printArray(int[]);
void mean(int[]);
void mode(int[], int[]);

int main()
{
	int freq_Num[10] = { 0 };
	int record[SIZE] = { 0 };

	printArray(record);
	mean(record);
	mode(freq_Num, record);

	return 0;
}

void printArray(int a[])
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < 80; i++)
	{
		a[i] = rand() % 10;
	}
	cout << "Random record >>" << endl << endl;

	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << a[count] << " ";
			count++;
		}
		cout << endl;
	}
	cout << endl;
}

void mean(int a[])
{
	int count = 0;
	int sum = 0;
	double mean = 0;

	cout << "Mean value >>" << endl;

	for (int i = 0; i < 80; i++)
	{
		sum += a[i];
		count++;
	}
	mean = (double)sum / count;
	cout << "Total index : " << count << ", sum of array : " << sum << ", mean : " << mean << endl;
}

void mode(int freq[], int a[])
{
	cout << "Histogram >>" << endl;
	cout << "record  " << "frequency     " << "histogram" << endl << endl;

	int n;

	for (int i = 0; i < 80; i++)
	{
		n = a[i];
		switch (n)
		{
		case 0:
			freq[0]++;
			break;
		case 1:
			freq[1]++;
			break;
		case 2:
			freq[2]++;
			break;
		case 3:
			freq[3]++;
			break;
		case 4:
			freq[4]++;
			break;
		case 5:
			freq[5]++;
			break;
		case 6:
			freq[6]++;
		case 7:
			freq[7]++;
			break;
		case 8:
			freq[8]++;
			break;
		case 9:
			freq[9]++;
			break;
		}
	}

	int rec = 0;
	int freqnum = freq[0];
	for (int i = 1; i < 10; i++)
	{
		if (freqnum < freq[i])
		{
			freqnum = freq[i];
			rec = i;
		}
	}

	for (int i = 0; i < 10; i++)
	{

		if (freq[i] >= 10)
			cout << "   " << i << "          " << freq[i] << "      ";
		else
			cout << "   " << i << "           " << freq[i] << "      ";

		for (int j = 0; j < freq[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "record : " << rec << " frequency number : " << freqnum << endl;
}