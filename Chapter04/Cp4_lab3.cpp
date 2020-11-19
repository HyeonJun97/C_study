#include<iostream>
using namespace std;

double dist_2d(int x, int y, int z, int w);

int main()
{
	int x1, y1, x2, y2;

	cout << "점(x1, y1)을 입력하세요: ";
	cin >> x1;
	cin >> y1;
	cout << "점(x2, y2)을 입력하세요: ";
	cin >> x2;
	cin >> y2;

	cout << "두 점의 거리는 "<< dist_2d(x1, y1, x2, y2) <<"입니다."<<endl;

	return 0;
}

double dist_2d(int x, int y, int z, int w)
{
	double d;
	d=sqrt(pow(x-z,2)+pow(y-w,2));

	return d;
}