#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	string find;
	string change;
	cout << "���ڿ��� �Է��ϼ���:(�ִ� 100����) ";
	getline(cin, s1);
	cout<<"ã�� ���ڿ��� �Է��ϼ���:(�ִ� 10����)";
	getline(cin, find);

	int pos = s1.find(find);
	while (1)
	{
		if (pos == string::npos)
		{
			cout << "�߸��� �����Դϴ�. �ٽ� �Է��ϼ���: ";
			getline(cin, find);
		}
		else
			break;
	}
	int length = find.length();

	cout<<"�ٲ� ���ڿ��� �Է��ϼ���:(�ִ� 10����)";
	getline(cin, change);

	s1.erase(pos, length);
	s1.insert(pos, change);
	
	cout<<s1<<endl;

	return 0;
}