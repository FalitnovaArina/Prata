#include "pch.h"
#include <iostream>
using namespace std;

void main()
{
	char name[10];
	char soname[10];
	char letter;
	int age;

	cout << "What is your first name?" << endl;
	cin.getline(name, 10);
	cout << "What is your last name?" << endl;
	cin.getline(soname, 10);
	cout << "What letter grade do you deserve?" << endl;
	cin >> letter;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "Name: " << name << ", " << soname << endl;
	cout << "Grade: " << char(letter + 1) << endl;
	cout << "Age: " << age << endl;
}