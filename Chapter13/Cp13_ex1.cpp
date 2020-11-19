#include<iostream>
#include<string>
using namespace std;

class Person
{
	string name;
	int age;
	bool gender;
public:
	Person(string n = " ", int a = 0, bool g=true) : name(n), age(a), gender(g) {}
	void setname(string s) {name =s;}
	string getname() { return name;}
	void setage(int a) {age=a;}
	int getage() {return age;}
	void setgender (bool g) {gender=g;}
	bool getgender() {return gender;}
};

class Employee : public Person
{
	int number;
	int salary;
public:
	Employee(string n = " ", int a = 0, bool g = true, int num = 0, int s = 0) : Person(n, a, g), number(num), salary(s) {}
	void setnumber(int n) {number=n;}
	int getnumber() {return number;}
	void setsalary(int s) {salary=s;}
	int getsalary() {return salary;}
	void display();
};

void Employee::display()
{
	cout<<this->getname()<<endl;
	cout<<this->getage()<<endl;
	cout<<this->getgender()<<endl;
	cout<<this->getnumber()<<endl;
	cout<<this->getsalary()<<endl;
}

int main()
{
	Employee e("±èÃ¶¼ö", 26, true, 2010001, 2800);
	e.display();
	return 0;
}