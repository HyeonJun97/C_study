#include<iostream>
#include<string>
using namespace std;

int main()
{
	string prob = "space";
	int length = prob.length();
	int tries = 0;
	string answer(length, '-');     //정답 초기화

	cout << "현재 상태: " << answer << endl;

	while (tries < 6 && answer != prob)   //게임 시작
	{
		char c;
		cout << "글자를 추측하시오: ";
		cin >> c;
		if (answer.find(c) != string::npos)   //중복 확인
		{
			cout << "전과 동일한 글자입니다. ";
			continue;
		}

		int pos = prob.find(c);

		if (pos == string::npos)  //글자X
		{
			cout << "추측한 글자가 없습니다." << endl;
			tries++;
			continue;
		}

		else  //글자O
		{
			answer[pos] = c;
			pos = prob.find(c, pos + 1);
			while (pos != string::npos)  //중복된 글자 찾기
			{
				answer[pos] = c;
				pos = prob.find(c, pos + 1);
			}
		}

		cout << "현재 상태: " << answer << endl;
		if (answer == prob)  //정답
		{
			cout << "맞았습니다" << endl;
			break;
		}
	}

	if (tries >= 6)
	{
		cout << "틀렸습니다. 정답은 " << prob << "입니다." << endl;
	}

	return 0;
}
