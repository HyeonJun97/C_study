#include<iostream>
#include<string>
using namespace std;

int main()
{
	string model;

	cout<<"물품 번호를 입력하세요: ";
	getline(cin, model);
	int length=model.length();
	int count = 0;

	if (length != 6)
		cout << "올바르지 않은 물품 번호입니다.";

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
		cout<<"올바른 물품번호입니다."<<endl;
	else if(length==6 && count != 6)
		cout << "올바르지 않은 물품 번호입니다."<<endl;

	return 0;
}