#include<iostream>
#include<string>
using namespace std;

int main()
{
	string id = "hyeonjun";
	string pw = "hyeonjun";
	string uid;
	string upw;
	cout << "ID�� �Է��ϼ���: ";
	getline(cin, uid);
	cout << "PW�� �Է��ϼ���: ";
	getline(cin, upw);
	int length1 = id.length();
	int length2 = pw.length();
	int length3 = uid.length();
	int length4 = upw.length();

	int checkid = 0;
	int checkpw = 0;

	if (length1 == length3)
	{
		for (int i = 0; i < length1; i++)
		{
			if (id[i] == uid[i])
				checkid++;
		}
	}

	if (length2 == length4)
	{
		for (int i = 0; i < length3; i++)
		{
			if (pw[i] == upw[i])
				checkpw++;
		}
	}

	if (length1 == checkid)
	{
		if (length3 == checkpw)
			cout << "��ġ�մϴ�." << endl;
		else
			cout << "PW�� ��ġ���� �ʽ��ϴ�." << endl;
	}
	else
	{
		if(length3!=checkpw)
			cout<< "ID�� PW�� ��ġ���� �ʽ��ϴ�"<<endl;
		else
			cout << "ID�� ��ġ���� �ʽ��ϴ�." << endl;
	}
	
	return 0;
}