#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int win=0, loss=0;

	for (int i = 0; i < 1000; i++)
	{
		rand();

		if(rand()%2==0)
			win++;
		else
			loss++;
	}

	cout << "½Â¸®: "<<win<<endl<<"ÆÐ¹è: "<<loss<<endl;

	return 0;
}
