#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter your growth in dm: ______\b\b\b\b\b\b";
	int growth;
	const char k = 100;
	cin >> growth;
	cout << "Your growth: " << growth / k << " fyt" << endl << growth % k << " dm" << endl;
	cout << k << endl;
	return 0;
}