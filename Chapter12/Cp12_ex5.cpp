#include<iostream>
#include<assert.h>
using namespace std;

class Myarray
{
	friend ostream& operator <<(ostream &, const Myarray &);
private:
	int *data;
	int size;
public:
	Myarray(int size =10);
	~Myarray();
	int getsize() const;
	Myarray &operator = (const Myarray &a);
	int &operator [](int i);
};

Myarray::Myarray(int s) //생성자
{
	size = (s>0?s:10);
	data=new int[size];
	for(int i=0; i<size; i++)
		data[i]=0;
}

Myarray::~Myarray() //소멸자
{
	delete [] data;
	data = NULL;
}

Myarray &Myarray::operator=(const Myarray &a) //=연산자정의
{
	if (&a != this)
	{
		delete[] data;
		size = a.size;
		data = new int[size];
		for (int i = 0; i < size; i++)
			data[i] = a.data[i];
	}
	return *this;
}

int Myarray::getsize() const { return size; }		// 배열크기

int &Myarray::operator[](int index) //인덱스가 범위에 있지 않으면 중지?
{
	assert(0<= index && index < size);
	return data[index];
}

ostream& operator<<(ostream &output, const Myarray &a)  //출력연산자 정의
{
	int i;
	for (int i = 0; i < a.size; i++)
		output<<a.data[i]<<' ';
	output <<endl;
	return output;
}

int main()
{
	Myarray a1(10);

	a1[0]=1;
	a1[1]=2;
	a1[2]=4;
	a1[3]=10;
	cout<<a1;

	return 0;
}