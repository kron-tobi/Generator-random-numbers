// Generator random numbers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 10;
	int a[n];
	int k = 0;

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		while (k < n)
		{		
			if (a[i] == a[k] && i > 0 && i != k)
			{
				//cout << "a[" << i << "] = " << a[i] << "\ta[" << k << "] = " << a[k] << endl;
				a[i] = rand() % 10;
				k = 0;				
			}
			else
			{
				k++;
			}				
		}
		k = 0;
		cout << a[i] << endl;
	}
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	cout << "min = " << min << endl;
    return 0;
}

