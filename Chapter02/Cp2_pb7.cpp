#include<iostream>
using namespace std;

int main()
{
	int x, fit;
	double y, inch;

	cout << "Ű�� �Է��Ͻÿ�: ";
	cin >> x;

	y = (double)x / 2.54;
	
	fit = y / 12;
	inch = y-fit*12;

	cout << x << "cm�� " << fit << "��Ʈ " << inch << "��ġ�Դϴ�." << endl;

	return 0;

}