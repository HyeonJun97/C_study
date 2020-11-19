#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int tile[10][10] = {};
	int x=4, y=4; 
	int number, cnt=0;
	srand((unsigned)time(NULL));

	tile[x][y]=1;

	for (int i = 0; i < 100000; i++)
	{
		number=rand()%8;
		switch (number)
		{
		case 0:
			{
				y++;
				if (y > 10)
					y = 10;
				tile[x][y]=1;
				break;
			}
		case 1:
		{
			x++;
			y++;
			if(x>10)
				x=10;
			if(y>10)
				y=10;
			tile[x][y]=1;
			break;
		}
		case 2:
		{
			x++;
			if (x > 10)
				x = 10;
			tile[x][y] = 1;
			break;
		}
		case 3:
		{
			x++;
			y--;
			if (x > 10)
				x = 5;
			if (y <= 0)
				y = 0;
			tile[x][y] = 1;
			break;
		}
		case 4:
		{
			y--;
			if (y<=0)
				y = 0;
			tile[x][y] = 1;
			break;
		}
		case 5:
		{
			x--;
			y--;
			if (x <= 0)
				x = 0;
			if (y <= 0)
				y = 0;
			tile[x][y] = 1;
			break;
		}
		case 6:
		{
			x--;
			if (x <= 0)
				x = 0;
			tile[x][y] = 1;
			break;
		}
		case 7:
		{
			x--;
			y++;
			if (x <= 0)
				x = 0;
			if (y > 10)
				y = 10;
			tile[x][y] = 1;
			break;
		}
		}
		cnt++;

		int check=0;
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if(tile[j][k]==1)
					check++;
			}
		}

		if(check==100)
			break;
	}
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < 10; k++)
		{
			cout<<tile[j][k]<<" ";
		}
		cout << endl;
	}
	cout << "ÃÑ ÀÌµ¿¼ö: "<<cnt<<endl;
	return 0;
}