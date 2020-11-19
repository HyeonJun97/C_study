#include<iostream>
#include<fstream>
using namespace std;

const int SIZE=1000;
void init_table(int table[], int size)
{
	for(int i=0; i<size; i++)
		table[i]=i*i;
}

int main()
{
	int table[SIZE];
	int data;
	long pos;

	init_table(table, SIZE);  //�迭 �ʱ�ȭ

	ofstream os;  //���� ������ ���� ���� ����
	os.open("test.dat", ofstream::binary);
	if (os.fail())
	{
		cout<<"test.dat ������ �� �� �����ϴ�." <<endl;
		exit(1);
	}
	os.write((char *)table, sizeof(table));  //�迭�� ���� ���� ���Ͽ� ����
	os.close();

	ifstream is;  //���� ������ �б� ���� ����
	is.open("test.dat", ofstream::binary);
	if (is.fail())
	{
		cout<<"test.dat ������ �� �� �����ϴ�."<<endl;
		exit(1);
	}

	while (1) //����ڰ� ������ ��ġ�� ������ ���Ϸκ��� �д´�
	{
		cout<<"���Ͽ����� ��ġ�� �Է��Ͻʽÿ�(0���� 999, ����-1): ";
		cin>>pos;
		if(pos==-1)
			break;
		is.seekg(pos*sizeof(int), ios::beg);  //��ġ ǥ���� �̵�
		is.read((char *)&data, sizeof(int));
		cout<<pos<<"��ġ�� ���� "<<data<<"�Դϴ�."<<endl;
	}
	is.close();
	return 0;
}