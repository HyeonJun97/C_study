#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream is;
	is.open("expr2.txt");
	if (is.fail())
	{
		cerr<<"���� ���¿� �����Ͽ����ϴ�. "<<endl;
		exit(1);
	}
	ofstream os;
	os.open("resultpr2.txt");
	if (os.fail())
	{
		cerr << "���� ���¿� �����Ͽ����ϴ�. " << endl;
		exit(1);
	}

	char c;
	char tmp;

	while (!is.eof())
	{
		is.get(c);

		if(c!=' ')
			tmp=c-29;
		else
			tmp=c;

		os<<tmp;
	}

	cout<<"���� ��ȣ�� ��ȣȭ�Ͽ����ϴ�."<<endl;

	is.close();
	os.close();
	return 0;
}