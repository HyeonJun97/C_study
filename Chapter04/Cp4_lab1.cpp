#include<iostream>
using namespace std;

void get_input();
int pluss(int x, int y);
int minuss(int x, int y);
int star(int x, int y);
int divice(int x, int y);

int main()
{
	char check;
	get_input();
	
	while (1)
	{
		cout << "계속하시겠습니까?(y 또는 n): ";
		cin >> check;
		if(check==110)
			break;
		else if(check==121)
			get_input();
	}
	return 0;
}

void get_input()
{
	int x, z;
	char y;
	int result;

	cout << "수식을 입력하시오(예: 100 + 200): ";
	cin >> x;
	cin >> y;
	cin >> z;

	if (y ==43)
		result=pluss(x, z);
	else if (y ==45)
		result = minuss(x, z);
	else if (y ==42)
		result = star(x, z);
	else if (y ==47)
		result = divice(x, z);

	cout << "연산의 결과는 " << result << "입니다." << endl;
}

int pluss(int x, int y)
{
	return x+y;
}
int minuss(int x, int y)
{
	return x-y;
}
int star(int x, int y)
{
	return x*y;
}
int divice(int x, int y)
{
	return x/y;
}

