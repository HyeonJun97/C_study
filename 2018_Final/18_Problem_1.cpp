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
		cout<<mm<<" �и�����(mm)		"<<cm<< " ��Ƽ����(cm)		"<<m<<" ����(m)		"<<endl;
		cout<<km<< " ų�ι���(km)		"<<in<<" ��ġ(in)		"<< ft<<" ��Ʈ(ft)			"<<endl;
		cout<<yd<<" �ߵ�(yd)		"<<mile<< " ����(mile)		"<<endl;
	}
};

int main()
{
	MyMetric m1(615); // 615m�� �Է����� �޾� ��ȯ�Ѵ�.
	m1.print();
	return 0;
}