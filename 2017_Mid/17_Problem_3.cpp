#include<iostream>
#include<cstdlib>
using namespace std;

#define SIZE 20

void get_array(int *x, int &num);
void print_array(int *x, int num);
void get_maxmin(int *x, int num, int &max, int &min);
void get_meanvar(int *x, int num, double &mean, double &var);
void selection_sort(int *list, int num);

int main()
{
	int i, num, max, min;
	double mean, var;
	int array[SIZE];

	get_array(array, num);
	print_array(array, num);

	get_maxmin(array, num, max, min);
	cout << "최대값 : "<<max<<endl;
	cout << "최소값 : "<<min<<endl;

	get_meanvar(array, num, mean, var);

	cout << "평균 : "<< mean<<endl;
	cout << "분산 : "<<var<<endl;

	selection_sort(array, num);
	cout<<"내림차순 정렬 : "<<endl;
	print_array(array, num);

	return 0;
}

void get_array(int *x, int &num)
{
	int i;
	const int MAX_SIZE = 100;

	cout<<"배열의 크기를 입력하시오 (최소 10, 최대 20) : ";
	cin >>num;

	for (i = 0; i < num; i++)
		x[i]= rand() % 100;
}

void print_array(int *x, int num)
{
	for (int i = 0; i < num; i++)
		cout<< x[i]<<" ";
	cout<<endl;
}

void get_maxmin(int *x, int num, int &max, int &min)
{
	max=x[0];
	min=x[0];
	for (int i = 0; i < num; i++)
	{
		if(x[i]>max)
			max=x[i];
		else if(x[i]<min)
			min=x[i];
	}
}

void get_meanvar(int *x, int num, double &mean, double &var)
{
	double sum=0;
	double m1=0, m2=1,result=0;
	for (int i = 0; i < num; i++)
		sum+=x[i];

	mean=sum/num;

	for (int j = 0; j < num; j++)
	{
		m1 = x[j] - mean;
		m2 = m1*m1;
		result+=m2;
	}
	var=result/num;
}

void selection_sort(int *list, int num)
{
	int m;
	for (int i = 0; i < num; i++)
	{
		for (int j =i; j < num; j++)
		{
			if (list[i] < list[j])
			{
				m=list[j];
				list[j] = list[i];
				list[i] = m;
			}
		}
	}
}