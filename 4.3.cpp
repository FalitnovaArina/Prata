#include "pch.h"
#include <iostream> 
#include <string>
using namespace std;


struct Pizza
{
	string Comp;
	double diam;
	double weight;
};

void main()
{
	Pizza pizza;
	cout << "Name of company" << endl;
	getline(cin, pizza.Comp);
	cout << "Diameter" << endl;
	cin >> pizza.diam;
	cout << "weight" << endl;
	cin >> pizza.weight;

	cout << "Company: " << pizza.Comp << endl;
	cout << "Diameter: " << pizza.diam << endl;
	cout << "weight: " << pizza.weight << endl;
}

