#include<iostream>
using namespace std;

int main()
{
	int x, y, z;

	cout << "상자의 체적 구하기" << endl;

	cout << "길이를 입력하세요: ";
	cin >> x;
	cout << "너비를 입력하세요: ";
	cin >> y;
	cout << "높이를 입력하세요: ";
	cin >> z;

	cout << "상자의 체적은 " <<x*y*z<< "입니다." << endl;

	return 0;
}