#include<iostream>
#include<string>
using namespace std;

class Book
{
	string title;
	int page;
	string author;
public:
	Book(string t = " ", int p = 0, string a = " ") : title(t), page(p), author(a) {}
	void settitle(string t) {title=t;}
	string gettitle() {return title;}
	void setpage(int p) {page =p;}
	int getpage() {return page;}
	void setauthor(string a) {author=a;}
	string getauthor() {return author;}
};

class Magazine : public Book
{
	string date;
public:
	Magazine(string t = " ", int p = 0, string a = " ", string d = " ") : Book(t, p, a), date(d) {}
	void setdate(string d) {date =d;}
	string getdate() {return date;}
	void display();
};

void Magazine::display()
{
	cout<<this->gettitle()<<endl;
	cout<<this->getpage()<<endl;
	cout<<this->getauthor()<<endl;
	cout<<this->getdate()<<endl;
}

int main()
{
	Magazine b1("AAA", 300, "BBB", "2019-06-04");
	b1.display();

	return 0;
}