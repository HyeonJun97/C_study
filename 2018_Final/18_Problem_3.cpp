#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string input_str;
public:
	Histogram(string s) {
		input_str = s;
	}
	Histogram& operator << (string s) // ���ڿ� �Է� �Լ� ���� �ۼ�
	{
		input_str=input_str+s;
		return *this;
	}
	Histogram& operator << (char s) // ���� �Է� �Լ� ���� �ۼ�
	{
		input_str = input_str + s;
		return *this;
	}
	void operator !() // �Լ����� �ۼ�
	{
		int size=input_str.length();
		int count=0;
		char c=97;

		for (int i = 0; i < size; i++)
		{
			cout << input_str[i];
			if((input_str[i]>=65 && input_str[i]<=90)||(input_str[i]>=97&&input_str[i]<=122))
				count++;
		}

		cout<<endl<<endl<<"�� ���ĺ� ��: "<<count<<endl;

		for (int i = 0; i < 26; i++)
		{
			int check=0;
			for (int j = 0; j < size; j++)
			{
				if (input_str[j] == 65 + i || input_str[j] == 97 + i)
					check++;
			}
			cout<<c<<":";
			for(int k=0; k<check; k++)
				cout<<"*";
			cout<<endl;
			c++;
		}
	}
};

int main() {
	Histogram song("Difficult. Very difficult. Plenty of courage I see. And not a bad mind either there's talent.\nAnd a thirst to prove yourself.\nBut where to put you...\n");
	song << "Well" << " if you're sure, better be.. " << "Gryffindor!" << " - by ";								// Histogram�� ���ڿ� �߰�
	song << 'J' << '.' << ' ' << 'K' << '.' << " Rowling";	// Histogram�� ���� �߰�
	!song;	// ������׷� ��� �� ���
}