#include<iostream>
using namespace std;

int ipower(int n, int k);

int main()
{
	int a, b, result;

	cout << "°ÅµìÁ¦°ö °è»ê ÇÔ¼ö(nÀÇ k½Â): ";
	cin >> a >> b;

	result=ipower(a, b);

	cout << result << endl;

	return 0;
}

int ipower(int n, int k)
{
	return pow(n,k);
}