#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class dicegame
{
	int diceface;
	int userguess;

	void rolldice()
	{
		diceface=(int)(rand()%6)+1;
	}

	int getuserinput(string prompt)
	{
		int r;
		cout<<prompt;
		cin>>r;
		return r;
	}

	void checkuserguess()
	{
		if (diceface == userguess)
			cout << "정답";
		else
			cout << "오답";
	}

public:
	void startplaying()
	{
		userguess = getuserinput("예상값을 입력하시오: ");
		rolldice();
		checkuserguess();
	}

};

int main()
{
	dicegame game;
	game.startplaying();
}
