#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	float d, e, imt;
	cout << "Введите Ваш рост" <<endl;
	cout << "Футов: ";
	cin >> a;
	cout << "Дюймов: ";
	cin >> b;
	cout << "Введите Ваш вес в фунтах: ";
	cin >> c;
	d = ((a * 12) + b)*0.0254;
	imt = (c / 2.2) / ((((a * 12) + b)*0.0254)*(((a * 12) + b)*0.0254));
	cout << "ИМТ = " << imt << endl;
		
	return 0;
}