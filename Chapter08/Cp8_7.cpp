#include<iostream>
#include<string>
using namespace std;

int main()
{
	int r;
	char answer = 'y';

	while (answer == 'y' || answer=='Y')
	{
		cout << "�������� �Է��ϼ���: " ;
		cin >> r;
		cout << "���� ������ "<<r*r*3.14<<"�Դϴ�."<<endl<<"����Ͻðڽ��ϱ�?(Y/N): ";
		cin >> answer;
	}
	return 0;
}