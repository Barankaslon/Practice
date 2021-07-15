#include<iostream>

using namespace std;

void  Foo(int *pa, int *pb, int *pc)
{
	(*pa) = 555;

	(*pb)++;

	(*pc) = -20;
}

void main()
{
	int a = 0;
	int b = 0;
	int c = 1;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	cout << "foo " << endl;

	Foo(&a, &b, &c);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}