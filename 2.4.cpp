#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double far, chel;
	const double a = 1.8;
	const int b = 32;
	cout <<"Введите температуру в градусах Цельсия: " << endl;
	cin >> chel;
	far = a * chel + b;
	cout << chel << " градусов по Цельсия это " << far << " градусов по Фаренгейту" << endl;

	return 0;

    
}

