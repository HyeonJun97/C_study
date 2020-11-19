#include<iostream>
#include<string>
using namespace std;

int main()
{
	int r;
	char answer = 'y';

	while (answer == 'y' || answer=='Y')
	{
		cout << "반지름을 입력하세요: " ;
		cin >> r;
		cout << "원의 면적은 "<<r*r*3.14<<"입니다."<<endl<<"계속하시겠습니까?(Y/N): ";
		cin >> answer;
	}
	return 0;
}