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
		cout << "����Ͻðڽ��ϱ�?(y �Ǵ� n): ";
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

	cout << "������ �Է��Ͻÿ�(��: 100 + 200): ";
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

	cout << "������ ����� " << result << "�Դϴ�." << endl;
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

