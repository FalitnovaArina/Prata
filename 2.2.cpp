#include "pch.h"
#include <iostream>
#include <math.h>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int farl, yard;
	const int p = 220;
	cout << "Введите расстояние в фарлонгах: " << endl;
	cin >> farl;
	yard = farl * p;
	cout << "Расстояние в ярдах: " << yard << endl;
	
	return 0;


}

