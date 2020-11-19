#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b,c, d;
	double result1, result2;

	while (1)
	{
		cout<<"방정식의 계수 a,b,c를 입력 하세요 : ";
		cin >> a>>b>>c;
		if(a==0 && b==0)
			break;
		else if(a==0 && b!=0)
			cout<< "일차식의 근은 : "<<-c/b<<endl;
		else
		{
			d=pow(b,2)-4*a*c;
			if(d==0)
				cout<<"한개의 중근은 : " << -b/(2*a)<<endl;
			else if(d > 0)
			{
				result1= (-b + sqrt(pow(b, 2) - 4 * a*c))/2*a;
				result2= (-b - sqrt(pow(b, 2) - 4 * a*c))/2*a;
				cout<<"두개의 실근은 : "<< result1 << " , "<< result2 <<endl;
			}
			else
			{
				result1=-b/(2*a);
				result2=sqrt(-(pow(b,2)-4*a*c))/2*a;
				cout<< "두개의 허근은 : "<<result1 <<" "<< result2<<"i"<<" , " << result1 <<" "<< -result2<<"i"<<endl;
			}
		}
	}
	return 0;
}
