#include<iostream>
#include<cstdlib>
using namespace std;

class dice
{
private:
	int face;
	int guess;
public:
	void roll();
	void setguess();
	int getguess();
	void print();
};

void dice::roll()
{
	face=(int)(rand()%6+1);
}

void dice::setguess()
{
	int g;
	cout<<"추측값을 입력하세요: ";
	cin>>g;
	guess=g;
}

int dice::getguess()
{
	return guess;
}

void dice::print()
{
	cout<<"추측값: "<<guess<<"    DICE: "<<face<<endl;
	if(guess==face)
		cout<<"정답"<<endl;
	else
		cout<<"오답"<<endl;
}

int main()
{
	dice dice;
	dice.roll();
	dice.setguess();
	dice.print();

	return 0;
}