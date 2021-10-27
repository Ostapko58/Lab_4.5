// Lab_4.5.cpp
// < Онишківа Остапа >
// Лабораторна робота No 4.5
// Цикли.
// Варіант 5

#include<iostream>
#include<cmath>
#include <iomanip>
#include<time.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	double x, y, R;
	cout << "R= "; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		cout << "x= "; cin >> x;
		cout << "y= "; cin >> y;

		if ((x >= -R && x <= R && y >= 0 && y <= sqrt(R * R - x * x) && y <= x + R) || (x >= -R && x <= 0 && y <= 0 && y <= -sqrt(R * R - x * x)))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		x = 2. * R * rand() / RAND_MAX - R;
		y = 2. * R * rand() / RAND_MAX - R;
		
		if ((x >= -R && x <= R && y >= 0 && y <= sqrt(R * R - x * x) && y <= x + R) || (x >= -R && x <= 0 && y <= 0 && y <= sqrt(R * R - x * x)))
		{
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		}
		else
		{
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
		
	}


	return 0;
}
