#include <iostream>
#include <string>

using namespace std;

class MyArray {
private:
	int size;
	int *ptr;
public:
	MyArray();	//생성자
	~MyArray();	//소멸자
	void append(int i);	//멤버함수
	void Delete();
	void print();
};
MyArray::MyArray()
{
	size=0;	
}

MyArray::~MyArray()
{
		delete[] ptr;
}

void MyArray::append(int i)
{
	if (size == 0)
	{
		size =1;
		ptr=new int[size];
		ptr[0]=i;
	}

	else
	{
		int *n= new int[size];
		for(int k=0; k<size; k++)
			n[k]=ptr[k];
		delete [] ptr;

		size++;

		ptr = new int[size];
		for(int k=0; k<size-1; k++)
			ptr[k]=n[k];

		ptr[size-1]=i;
		
		delete [] n;
	}
}

void MyArray::Delete()
{
	int *n=new int[size];
	for(int k=0; k<size; k++)
		n[k]=ptr[k];
	delete [] ptr;

	size--;

	ptr=new int[size];
	for(int k=0; k<size; k++)
		ptr[k]=n[k];
	delete [] n;
}

void MyArray::print()
{
	for(int i=0; i<size; i++)
		cout<<ptr[i]<<endl;
}

int main()
{
	MyArray array;

	array.append(11);
	array.append(22);
	array.append(33);
	array.append(44);
	array.append(55);
	array.append(66);
	array.print();

	array.Delete();
	array.print();

	return 0;
}