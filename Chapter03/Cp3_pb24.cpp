#include<iostream>
using namespace std;

int main()
{
	int answer = 60;
	int guess;
	int i;

	while (1)
	{
		cout << "������ ���� �Է��ϼ���: ";
		cin >> guess;

		if (guess < 0)
			break;
		else
		{
			if (guess > answer)
				cout << "���亸�� ū ���Դϴ�. "<<endl;
			else if (guess < answer)
				cout << "���亸�� ���� ���Դϴ�. "<<endl;
			else
			{
				cout << "�����Դϴ�. "<<endl;
				break;
			}
		}
	}
	
	return 0;

}