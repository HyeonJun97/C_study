#include<iostream>
using namespace std;

int main()
{
	int x, fit;
	double y, inch;

	cout << "키를 입력하시오: ";
	cin >> x;

	y = (double)x / 2.54;
	
	fit = y / 12;
	inch = y-fit*12;

	cout << x << "cm는 " << fit << "피트 " << inch << "인치입니다." << endl;

	return 0;

}