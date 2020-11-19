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
	int transfer(int amount, bankaccount otheraccount);
};

void bankaccount::setbalance(int amount)
{
	balance = amount;
}

int bankaccount::getbalance()
{
	return balance;
}

void bankaccount::deposit(int amount)
{
	balance += amount;
}

void bankaccount::withdraw(int amount)
{
	balance -= amount;
}

void bankaccount::print()
{
	cout << "잔액은 " << balance << "입니다." << endl;
}

int bankaccount::transfer(int amount, bankaccount otheraccount)
{
	balance-=amount;
	return otheraccount.balance+amount;
}

int main()
{
	bankaccount account;
	bankaccount account2;
	account.setbalance(10000);
	account.print();
	account2.setbalance(0);
	account2.print();

	account2.setbalance(account.transfer(5000,account2));
	account.print();
	account2.print();

	return 0;
}

