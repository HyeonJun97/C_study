#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	cout << "���ڿ��� �Է��ϼ���: ";
	getline(cin, s1);
	int length = s1.length();
	int count = 1;

	for (int i = 0; i < length; i++)
	{
		if(s1[i]==' ')
			count++;
	}

	cout<< "�ܾ��� ������ "<<count<<"���Դϴ�."<<endl;

	return 0;
}