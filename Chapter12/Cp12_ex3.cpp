#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
	int isbn;
	string title;
public:
	Book(int isbn, string &title){this->isbn = isbn; this->title=title;}
	Book(int isbn) { this->isbn = isbn; this->title="unknown"; }  //변환생성자 int->class
	void display() { cout<<isbn<<":"<<title<<endl;}					 //변환연산자 class->int
	operator int() const { return isbn; }
};

bool check(int isbn)
{
	cout<<isbn<<endl;
	return true;
}

int main()
{
	Book b1=9782001;
	b1.display();
	int isbn=b1;
	cout<<isbn<<endl;
	check(b1);

	return 0;
}