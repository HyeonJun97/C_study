#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int cnt[10] = { 0 };
	int n;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		n = rand() % 10;
		switch (n)
		{
		case 0:
			cnt[0]++;
			break;
		case 1:
			cnt[1]++;
			break;
		case 2:
			cnt[2]++;
			break;
		case 3:
			cnt[3]++;
			break;
		case 4:
			cnt[4]++;
			break;
		case 5:
			cnt[5]++;
			break;
		case 6:
			cnt[6]++;
			break;
		case 7:
			cnt[7]++;
			break;
		case 8:
			cnt[8]++;
			break;
		case 9:
			cnt[9]++;
			break;
		}
	}
	int max = cnt[0];
	int maxnum = 0;

	for (int k = 1; k < 10; k++)
	{
		if (max < cnt[k])
		{
			max = cnt[k];
			maxnum = k;
		}
	}

	cout << "최대 생성 수: " << maxnum << endl;
	
	return 0;
}