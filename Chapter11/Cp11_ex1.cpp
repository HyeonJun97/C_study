#include<iostream>
#include<string>
using namespace std;

class Student
{
	string name;
	string telephone;
public:
	Student(const string n, const string t)
	{
		name= n;
		telephone=t;
	}
	void setname(const string a) {name=a;}
	string getname() {return name;}
	void settelephone(const string b) {telephone=b;}
	string gettelephone(){return telephone;}
};

class Lab
{
	string name;
	Student *chief;
	Student *manager;
public:
	Lab(const string n)
	{
		name =n;
		chief=NULL;
		manager=NULL;
	}
	void setchief(Student *p) {chief=p;}
	void setmanager(Student *p) {manager=p;}
	void print()
	{
		cout<<name<<"������"<<endl;
		if(chief!=NULL)
			cout<<"������ "<<chief->getname()<<endl;
		else
			cout<<"������ �����ϴ�."<<endl;
		if(manager!=NULL)
			cout<<"�ѹ��� "<<chief->getname()<<endl;
		else
			cout<<"�ѹ��� �����ϴ�."<<endl;
	}
};

int main()
{
	Lab lab("���� ó��");
	Student *p=new Student("��ö��", "010-1234-5678");

	lab.setchief(p);
	lab.setmanager(p);
	lab.print();

	delete p;
	return 0;
}