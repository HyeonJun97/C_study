#include<iostream>
using namespace std;

class MyMetric
{
public:
	static double kilotomile(double k) { return k*0.6213;}
	static double miletokilo(double m) {return m*1.6093;}
};

int main()
{
	int k=3;
	
	cout<<k<<"킬로미터는 "<<MyMetric::kilotomile(k)<<"마일입니다."<<endl;
	cout<<k<<"마일은 "<<MyMetric::miletokilo(k)<<"킬로미터입니다."<<endl;

	return 0;
}