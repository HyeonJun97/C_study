#include<iostream>
using namespace std;

int main()
{
	int answer = 60;
	int guess;
	int i;

	while (1)
	{
		cout << "추측한 수를 입력하세요: ";
		cin >> guess;

		if (guess < 0)
			break;
		else
		{
			if (guess > answer)
				cout << "정답보다 큰 수입니다. "<<endl;
			else if (guess < answer)
				cout << "정답보다 작은 수입니다. "<<endl;
			else
			{
				cout << "정답입니다. "<<endl;
				break;
			}
		}
	}
	
	return 0;

}