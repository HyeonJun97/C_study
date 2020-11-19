#include<iostream>
using namespace std;

class Time
{
	int hour;
	int minute;
	int second;
public:
	Time(int h = 0, int m = 0, int s = 0) :hour(h), minute(m), second(s) {}
	~Time() {}
	void sethour(int h) { hour = h; }
	int gethour() { return hour; }
	void setminute(int m) { minute = m; }
	int getminute() { return minute; }
	void setsecond(int s) { second = s; }
	int getsecond() { return second; }
	void print() { cout << "시간은 " << hour << "시 " << minute << "분 " << second << "초입니다." << endl; }
};

bool isequal(Time t1, Time t2)
{
	if ((t1.gethour() == t2.gethour()) && (t1.getminute() == t2.getminute()) && (t1.getsecond() == t2.getsecond()))
		return true;
	else
		return false;
}

/*bool isequal(Time &t1, Time &t2)
{
	if ((t1.gethour == t2.gethour) && (t1.getminute == t2.getminute) && (t1.getsecond == t2.getsecond))
		return true;
	else
		return false;
}*/ 
//에러발생(변수를 그냥 사용할지 참조로 사용할지 알 수 없음)

bool isequal(Time *t1, Time *t2)
{
	if ((t1->gethour() == t2->gethour()) && (t1->getminute() == t2->getminute()) && (t1->getsecond() == t2->getsecond()))
		return true;
	else
		return false;
}

int main()
{
	Time t1(11, 50, 12);
	Time t2(11, 50, 12);
	Time t3(12, 50, 11);

	Time *tt1 = &t1;
	Time *tt2 = &t2;
	Time *tt3 = &t3;

	t1.print();
	t2.print();
	t3.print();

	cout << isequal(t1, t2) << endl;
	cout << isequal(tt1, tt2) << endl;
	cout << isequal(t1, t3) << endl;
	cout << isequal(tt1, tt3) << endl;

	return 0;
}