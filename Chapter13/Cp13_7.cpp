#include<iostream>
#include<string>
using namespace std;

class Student
{
	string name;
	int number;
	string major;
	int grade;
	int score;
public:
	Student(string n = " ", int nb = 0, string m = " ", int g = 0, int s = 0) : name(n), number(nb), major(m), grade(g), score(s) {}
	void setname(string n) {name=n;}
	string getname(){return name;}
	void setnumber(int nb) {number=nb;}
	int getnumber() {return number;}
	void setmajor(string m) {major =m;}
	string getmajor() {return major;}
	void setgrade(int g) {grade=g; }
	int getgrade() {return grade;}
	void setscore(int s) {score=s;}
	int getscore() {return score;}
	void print()
	{
		cout << "이    름 : " << name << endl;
		cout << "학    번 : " << number << endl;
		cout << "소속학과 : " << major << endl;
		cout << "학    년 : " << grade << endl;
		cout << "이수학점 : " << score << endl;
	}
};

class  Undergraduate : public Student
{
	string group;
public:
	Undergraduate(string n = " ", int nb = 0, string m = " ", int g = 0, int s = 0, string gr = " ") : Student(n, nb, m, g, s), group(gr) {}
	void setgroup(string gr	) {group=gr;}
	string getgroup() {return group;}
	void print()
	{
		Student::print();
		cout<<"동아리: "<<group<<endl;
	}
};

class Graduate : public Student
{
	string type;
	double rate;
public:
	Graduate(string n = " ", int nb = 0, string m = " ", int g = 0, int s = 0, string t = " ", double r = 0) : Student(n, nb, m, g, s), type(t), rate(r) {}
	void settype(string t) {type =t ;}
	string gettype() {return type;}
	void setrate(double r) {rate=r;}
	double getrate() {return rate;}
	void print()
	{
		Student::print();
		cout<<"조교 유형: "<<type<<endl;
		cout<<"장학금 비율: "<<rate<<endl;
	}
};

int main()
{
	Undergraduate s1("KHJ", 164185, "Eletronic Engineering", 2, 57, "R&C");
	Graduate s2("KKK", 161616, "Computer", 1, 30, "Teaching AS", 0.5);

	s1.print();
	cout<<endl;
	s2.print();

	return 0;
}