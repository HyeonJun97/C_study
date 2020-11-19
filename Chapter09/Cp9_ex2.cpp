#include<iostream>
#include<string>
using namespace std;

class bankaccount
{
private:
	int accountnumber;
	string owner;
	int balance;

public:
	void setbalance(int amount);
	int getbalance();
	void deposit(int amount);
	void withdraw(int amount);
	void print();
};

void bankaccount::setbalance(int amount)
{
	balance=amount;
}

int bankaccount::getbalance()
{
	return balance;
}

void bankaccount::deposit(int amount)
{
	balance+=amount;
}

void bankaccount::withdraw(int amount)
{
	balance-=amount;
}

void bankaccount::print()
{
	cout << "잔액은 " << balance << "입니다." << endl;
}

int main()
{
	bankaccount account;
	account.setbalance(0);
	account.deposit(10000);
	account.print();
	account.withdraw(8000);
	account.print();

	return 0;
}

