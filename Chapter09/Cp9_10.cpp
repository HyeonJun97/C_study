#include<iostream>
using namespace std;

class myarray
{
	int size;
	int *ptr;
public:
	myarray()
	{
		size = 0;
	}
	void append(int a);
	void del();
	void print();
};


void myarray::append(int a)
{
	if (size == 0)
	{
		size=1;
		ptr=new int[size];
		ptr[0]=a;
	}

	else
	{
		int *n = new int[size];
		for (int i = 0; i < size; i++)
			n[i] = ptr[i];
		delete[] ptr;

		ptr = new int[size+1];
		
		for (int i = 0; i < size; i++)
			ptr[i] = n[i];
		
		ptr[size]=a;

		size++;
		delete[] n;
	}
}

void myarray::del()
{
	int *n=new int[size];
	for(int i=0; i<size; i++)
		n[i]=ptr[i];
	delete [] ptr;

	size--;

	ptr=new int[size];
	for(int i=0; i<size; i++)
		ptr[i]=n[i];
	delete [] n;
}

void myarray::print()
{
	cout<<"배열의 크기: "<<size<<endl;

	for(int i=0; i<size; i++)
		cout<<ptr[i]<<endl;

}

int main()
{
	myarray a;
	a.append(1);
	a.append(2);
	a.append(3);
	a.append(5);
	a.print();
	a.del();
	a.print();

	return 0;
}