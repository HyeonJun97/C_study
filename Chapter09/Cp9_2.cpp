#include<iostream>
#include<string>
using namespace std;

/*class book    //-1��
{
public:
	string title;
	string author;
	void print();
};

void book::print()
{
	cout << "����: " << title << endl << "����: " << author << endl;
}

int main()
{
	book book;
	book.title = "great c++";
	book.author = "bob";
	book.print();

	return 0;
}*/

class book   //-2��
{
private:
	string title;
	string author;
public:
	void settitle(string t);
	string gettitle();
	void setauthor(string a);
	string getauthor();
	void print();
};

void book::settitle(string t)
{
	title=t;
}

string book::gettitle()
{
	return title;
}

void book::setauthor(string a)
{
	author=a;
}

string book::getauthor()
{
	return author;
}

void book::print()
{
	cout << "����: " << title << endl << "����: " << author << endl;
}

int main()
{
	book book;
	book.settitle("great c++");
	book.setauthor("bob");
	book.print();

	return 0;
}