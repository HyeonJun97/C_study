#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c, d;
	double result1, result2;

	while (1)
	{
		cout<<"�������� ��� a,b,c�� �Է� �ϼ��� : ";
		cin >> a>>b>>c;
		if(a==0 && b==0)
			break;
		else if(a==0 && b!=0)
			cout<< "�������� ���� : "<<-c/b<<endl;
		else
		{
			d=pow(b,2)-4*a*c;
			if(d==0)
				cout<<"�Ѱ��� �߱��� : " << -b/(2*a)<<endl;
			else if(d > 0)
			{
				result1= (-b + sqrt(pow(b, 2) - 4 * a*c))/2*a;
				result2= (-b - sqrt(pow(b, 2) - 4 * a*c))/2*a;
				cout<<"�ΰ��� �Ǳ��� : "<< result1 << " , "<< result2 <<endl;
			}
			else
			{
				result1=-b/(2*a);
				result2=sqrt(-(pow(b,2)-4*a*c))/2*a;
				cout<< "�ΰ��� ����� : "<<result1 <<" "<< result2<<"i"<<" , " << result1 <<" "<< -result2<<"i"<<endl;
			}
		}
	}
	return 0;
}
