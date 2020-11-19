#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	double avg;

	cout << "컴퓨터 개론 과목의 점수를 입력하시오: ";
	cin >> a;
	cout << "C언어 프로그래밍 과목의 점수를 입력하시오: ";
	cin >> b;
	cout << "영어 과목의 점수를 입력하시오: ";
	cin >> c;
	cout << "일반 수학 과목의 점수를 입력하시오: ";
	cin >> d;

	avg = (double)(a + b + c + d) / 4;

	cout << "평균 점수는 " << avg << "점입니다." << endl;

	return 0;

}