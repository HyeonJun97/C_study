#include <iostream>

using namespace std;

class MyMetric
{
private:
	double mm; double cm; double m; double km; double in; double ft;
	double yd; double mile;

public:
	MyMetric(double metric) {
		mm=1000*metric;
		cm=100*metric;
		m=metric;
		km=0.001*metric;
		in=39.37*metric;
		ft=3.2808*metric;
		yd=1.0936*metric;
		mile=0.0006*metric;
	}

	void print() {
		cout<<mm<<" 밀리미터(mm)		"<<cm<< " 센티미터(cm)		"<<m<<" 미터(m)		"<<endl;
		cout<<km<< " 킬로미터(km)		"<<in<<" 인치(in)		"<< ft<<" 피트(ft)			"<<endl;
		cout<<yd<<" 야드(yd)		"<<mile<< " 마일(mile)		"<<endl;
	}
};

int main()
{
	MyMetric m1(615); // 615m을 입력으로 받아 변환한다.
	m1.print();
	return 0;
}