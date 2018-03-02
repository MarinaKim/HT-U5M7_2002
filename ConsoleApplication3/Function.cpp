#include<stdio.h>
#include <locale.h>
#include<iostream>
#include <math.h>
#include <time.h>
#include <stdint.h>
#include <string.h>

using namespace std;

void perevod(int a)
{
	int k, b;
	if (a > 15)
	{

		k = a / 16;
		b = a - k * 16;
		perevod(k);
	}
	else
		b = a;
	switch (b)
	{
	case 10:
		cout << "A";
		break;
	case 11:
		cout << "B";
		break;
	case 12:
		cout << "C";
		break;
	case 13:
		cout << "D";
		break;
	case 14:
		cout << "E";
		break;
	case 15:
		cout << "F";
		break;
	default:
		cout << b;
		break;
	}
}

void rAge(int a)
{
	cout << "введите возраст: ";
	cin >> a;
	if (a >= 18 && a <= 30)
	{
		cout << "возраст действительный. " << endl;
	}
	else
	{
		rAge(a);
	}
}

void sum_max(int count, int *sum, int *max)
{
	while (count != 0)
	{
		int a;
		cin >> a;
		*sum += a;
		if (a > *max)
			*max = a;
		count--;
	}
}