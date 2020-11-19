#include<iostream>
#include<string>
using namespace std;

int main()
{
	string id = "hyeonjun";
	string pw = "hyeonjun";
	string uid;
	string upw;
	cout << "ID를 입력하세요: ";
	getline(cin, uid);
	cout << "PW를 입력하세요: ";
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
			cout << "일치합니다." << endl;
		else
			cout << "PW가 일치하지 않습니다." << endl;
	}
	else
	{
		if(length3!=checkpw)
			cout<< "ID와 PW가 일치하지 않습니다"<<endl;
		else
			cout << "ID가 일치하지 않습니다." << endl;
	}
	
	return 0;
}