#include <iostream>
#include <cstdlib>
#include "complex.h"

using namespace std;


int main()
{

	Complex userValue;
	cout << "Enter a complex value (a + bi): " << endl;
	cin >> userValue;
	
	Complex userValue2;
	cout << "Enter another complex value (a + bi): " << endl;
	cin >> userValue2;
	
	
	Complex point;
	point = userValue + userValue2;
	cout << point << endl;

	userValue -= userValue2;
	cout << userValue << endl;
	Complex point2;
	cout << "Enter a third complex value " << endl;
	cin >> point2;
	point2 += point;

	cout << point2 << endl;

	return 0;
}