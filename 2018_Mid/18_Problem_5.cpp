#include<iostream>
using namespace std;

double Mydet(double A[2][2]);
void Mylin(double A[2][2], double B[2][1]);
void Mymul(double A[2][2], double B[2][1]);

int main()
{
	//double A[2][2] = { {1,0}, {0,1} };
	double A[2][2] = { {16,4},{3,2} };
	double B[2][1] = { 112,31 };

	Mylin(A, B);

	return 0;
}

double Mydet(double A[2][2])
{
	return A[0][0] * A[1][1] - A[0][1] * A[1][0];
}

void Mymul(double A[2][2], double B[2][1])
{
	double x[2][1] = { 0 };

	for (int i = 0; i <= 1; i++)
	{
		x[0][0] += A[0][i] * B[i][0];
		x[1][0] += A[1][i] * B[i][0];
	}

	cout << "방정식의 해는 " << x[0][0] << "," << x[1][0] << "입니다.";
}

void Mylin(double A[2][2], double B[2][1])
{
	double invM[2][2];
	double detVal = Mydet(A);

	if (detVal == 0)
		cout << "역행렬을 구할 수 없습니다" << endl;
	else
	{
		invM[0][0] = A[1][1] / detVal;
		invM[1][1] = A[0][0] / detVal;
		invM[0][1] = A[0][1] / detVal*-1;
		invM[1][0] = A[1][0] / detVal*-1;

		Mymul(invM, B);
	}
}
