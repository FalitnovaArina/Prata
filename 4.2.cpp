#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string Name;
	double kkal;
	double weight;
};

void main()
{
	CandyBar snack = { "Mocha Munch", 350, 2.3 };
	cout << "Candy: " << snack.Name << endl;
	cout << "Kkal: " << snack.kkal << endl;
	cout << "Weight: " << snack.weight << endl;
}