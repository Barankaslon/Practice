#include <iostream>

using namespace std;

int Sum(int a, int b, int c)
{
	return a + b + c;
}

int Sum(int a, int b)
{
	return a + b;
}

double Sum(double a, double b)
{
	return a + b;
}

int main()
{
	cout << Sum(5, 6) << endl;

	cout << Sum(4.1, 5.2) << endl;

	cout << Sum(3, 6, 8) << endl;
}