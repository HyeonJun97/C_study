#include<iostream>
#include<string>
using namespace std;

class employee
{
	string name;
	string number;
	int salary;

public:
	void setname(string n);
	string getname();
	void setnumber(string nb);
	string getnumber();
	void setsalary(int s);
	int getsalary();
	void print();
};

void employee::setname(string n)
{
	name=n;
}

string employee::getname()
{
	return name;
}

void employee::setnumber(string nb)
{
	number=nb;
}

string employee::getnumber()
{
	return number;
}

void employee::setsalary(int s)
{
	salary=s;
}

int employee::getsalary()
{
	return salary;
}

void employee::print()
{
	cout<<"이름: "<<name<<endl;
	cout<<"번호: "<<number<<endl;
	cout<<"급여: "<<salary<<endl;
}

int main()
{
	employee employee;

	employee.setname("kimkimkim");
	employee.setnumber("010-1234-5678");
	employee.setsalary(3000000);
	employee.print();

	return 0;
}