#include <iostream>

using namespace std;

int main()
{
	int a = 5;

	int *pa = &a;

	int b = 10;

	int *pb = &b;

	cout << pa << "\tValue: " << a << endl;
	cout << pb << "\tValue: " << b << endl;

	*pb = 25;
	*pa = 400;

	cout << pb << "\tValue: " << b << endl;
	cout << pa << "\tValue: " << a << endl;


	return 0;
}