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
	
	cout<<k<<"ų�ι��ʹ� "<<MyMetric::kilotomile(k)<<"�����Դϴ�."<<endl;
	cout<<k<<"������ "<<MyMetric::miletokilo(k)<<"ų�ι����Դϴ�."<<endl;

	return 0;
}