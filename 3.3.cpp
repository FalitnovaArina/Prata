#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double km, benz, rashod;
	int k = 100;
	cout << "Введите расстояние в километрах: " << endl;
	cin >> km;
	cout << "Ведите количество бензина: " << endl;
	cin >> benz;
	rashod = benz * k / km;
	cout << "Ваш расход на сто километров: " << rashod << endl;
	
	return 0;
}



