#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	string name;
	int age;
	int weight;

	void Print()
	{
		cout << "\nName: " << name << " \nWeight: " << weight << " \nAge: " << age << endl << endl;

		cout << "======================================================================" << endl;
	}
};

class Point
{
private:
	int x{};
	int y{};

public:

	Point(int valueX, int valueY )
	{
		x = valueX;
		y = valueY;
	}

	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	int GetY()
	{
		return y;
	}

	void SetY(int valueY)
	{
		y = valueY;
	}

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl <<  endl;
	}
};

class CoffeGrider
{
private:

	bool CheckVoltage()
	{
		return false;
	}

public:
	void Start()
	{
		if (CheckVoltage())
		{
			cout << "VjuHHHH!" << endl;
		}
		else
		{
			cout << "Beep Beep, Low Voltage" << endl;
		}
	}
};

int main() {

	CoffeGrider Bosh;
	Bosh.Start();
		
	Human firsHuman;

	firsHuman.age = 34;
	firsHuman.name = "Alex";
	firsHuman.weight = 100;

	firsHuman.Print();

	Human secondHuman;
	secondHuman.age = 8;
	secondHuman.name = "Andrey";
	secondHuman.weight = 10;

	

	secondHuman.Print();


	Human extraHuman;
	extraHuman.age = {};
	extraHuman.name = {""};
	extraHuman.weight = {};

	extraHuman.Print();

	Point a(5, 44);
	a.Print();

	a.SetY(11);

	a.Print();

	Point b(3, 70);
	b.Print();




	return 0;
}