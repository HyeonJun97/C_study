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
		cout<<name<<"연구실"<<endl;
		if(chief!=NULL)
			cout<<"실장은 "<<chief->getname()<<endl;
		else
			cout<<"실장이 없습니다."<<endl;
		if(manager!=NULL)
			cout<<"총무는 "<<chief->getname()<<endl;
		else
			cout<<"총무가 없습니다."<<endl;
	}
};

int main()
{
	Lab lab("영상 처리");
	Student *p=new Student("김철수", "010-1234-5678");

	lab.setchief(p);
	lab.setmanager(p);
	lab.print();

	delete p;
	return 0;
}