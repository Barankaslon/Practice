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

	Point(int valueX, bool boolean)
	{
		x = valueX;
		if (boolean)
		{
			y = 1;
		}
		else
		{
			y = -1;
		}
	}

	void Print()
	{
		cout << "Value X: " << x << "\tValue Y: " << y << endl;
	}
};

int main()
{
	cout << Sum(5, 6) << endl;

	cout << Sum(4.1, 5.2) << endl;

	cout << Sum(3, 6, 8) << endl;

	Point a;
	a.Print();

	Point b(5, 14);
	b.Print();

	Point c(7, false);
	c.Print();

	return 0;
}