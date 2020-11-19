#include<iostream>
using namespace std;
unsigned long binary2decimal(long bin);
unsigned long decimal2binary(long dec);

int main()
{
	unsigned long bin =0, dec=0;

	cout << " 2진수를 입력하세요 : ";  cin >> bin;
	dec = binary2decimal(bin);
	cout << " 2진수 -> 10진수 : "<<dec << endl;

	cout << " 10진수를 입력하세요 : "; cin >> dec;
	bin = decimal2binary(dec);
	cout << " 10진수 -> 2진수 : " <<bin << endl;

	return 0;
}

unsigned long binary2decimal(long bin)
{
	int remain;
	long result=0;
	for(int i=0; ;i++)
	{
			remain = bin % 10;
			bin=bin/10;
			int k=1;
			if (remain == 1)
			{
				for (int j = i; j > 0; j--)
				{
					k *= 2;
				}
				result = result + k;
			}
			
			if (bin == 0)
			{
				return result;
				break;
			}
	}
}

unsigned long decimal2binary(long dec)
{
	int remain;
	long result=0;
	for (int i = 0; ; i++)
	{
		remain=dec%2;
		dec=dec/2;
		int k = 1;
		if (remain == 1)
		{
			for (int j = i; j > 0; j--)
			{
				k *= 10;
			}
			result = result + k;
		}
		if (dec == 0)
		{
			return result;
			break;
		}
	}
	return 0;
}