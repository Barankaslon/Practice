#include <iostream>

using namespace std;

void main()
{
	int a = 5;

	int* pa = &a;

	int& aRef = a;

	cout << "*pa\t" << pa << endl;
	pa++;
	cout << "*pa\t" << pa << endl;
	cout << "&aRef\t" << aRef << endl;
}