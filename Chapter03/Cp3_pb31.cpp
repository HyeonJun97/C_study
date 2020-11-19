#include<iostream>
using namespace std;

int main()
{
	int n, r, i;
	int p=1;

	cout << "서로 다른 n개에서 r개를 택하여 나열하는 방법"<<endl;
	cout << "n을 입력하세요: ";
	cin >> n;
	cout << "r을 입력하세요: ";
	cin >> r;

	for (i = 0; i<r; i++)
	{
		p = p * n;
		n = n - 1;
	}

	cout << "nPr = " << p << "입니다" << endl;

	return 0;
}