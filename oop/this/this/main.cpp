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


class Point
{
private:
	int x;
	int y;
public:

	Point()
	{
		x = {};
		y = {};

		cout << this << " constructor" << endl;

		this->
	}

	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " constructor" << endl;
	}

	void Print()
	{
		cout << "Value X: " << x << "\tValue Y: " << y << endl;
	}
};

int main()
{

	Point a;
	a.Print();

	Point b(4, 11);
	b.Print();



	return 0;
}