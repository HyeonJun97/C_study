#include<iostream>
#include<string>
using namespace std;

class SMS
{
	string anum;
	string bnum;
	string txt;
	string time;
public:
	SMS() {}
	SMS(string a, string b, string c, string d)
	{
		anum=a;
		bnum=b;
		txt=c;
		time=d;
	}
	void setanum(string a) { anum=a;}
	string getanum() {return anum;}
	void setbnum(string b) { bnum=b; }
	string getbnum() {return bnum;}
	void settxt(string c){txt=c;}
	string gettxt() {return txt;}
	void settime(string d){time=d;}
	string gettime() {return time; }
	void print()
	{
		cout<<"�߽Ź�ȣ: "<<anum<<endl;
		cout<<"���Ź�ȣ: "<<bnum<<endl;
		cout<<txt<<endl;
		cout<<"�߼۽ð�: "<<time<<endl;
	}
};

int main()
{
	SMS s1("010-1234-5678","010-1111-2222","Hi","3��30��");
	SMS s2("010-7777-7777","010-1122-3333","Hello","4��");

	s1.print();
	cout<<endl;
	s2.print();

	return 0;
}