#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream is;
	is.open("expr1.txt");
	if (!is)
	{
		cerr<<"파일 오픈에 실패하였습니다." <<endl;
		exit(1);
	}
	int count=0;
	int temp[100];

	while (!is.eof())
	{
		is>>temp[count];
		count++;
	}

	int tmp=0;
	for(int i=0; i<count-1; i++)
		for (int j = 0; j < count - i - 1; j++)
		{
			if (temp[j] > temp[j + 1])
			{
				tmp = temp[j];
				temp[j] = temp[j + 1];
				temp[j + 1] = tmp;
			}
		}
	ofstream os;
	os.open("resultpr1.txt");
	if (os.fail())
	{
		cerr<<"파일 오픈 실패"<<endl;
		exit(1);
	}
	for (int i = 0; i < count; i++)
	{
		os<<temp[i]<<endl;
	}
	is.close();
	os.close();
	return 0;
}

