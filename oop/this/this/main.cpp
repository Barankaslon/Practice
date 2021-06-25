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
	}

	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
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



	return 0;
}