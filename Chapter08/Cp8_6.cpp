#include<iostream>
#include<string>
using namespace std;

int main()
{
	string model;

	cout<<"��ǰ ��ȣ�� �Է��ϼ���: ";
	getline(cin, model);
	int length=model.length();
	int count = 0;

	if (length != 6)
		cout << "�ùٸ��� ���� ��ǰ ��ȣ�Դϴ�.";

	else
	{
		for (int i = 0; i < 2; i++)
		{
			if (model[i] >= 'A' && model[i] <='Z')
				count++;
		}
		for (int i = 2; i < 6; i++)
		{
			if (model[i] >= '0' && model[i] <= '9')
				count++;
		}
	}

	if(count==6)
		cout<<"�ùٸ� ��ǰ��ȣ�Դϴ�."<<endl;
	else if(length==6 && count != 6)
		cout << "�ùٸ��� ���� ��ǰ ��ȣ�Դϴ�."<<endl;

	return 0;
}