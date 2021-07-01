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
	int GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	void Print()
	{
		cout << "X = " << x << "\tY = " << y << endl <<  endl;
	}
};

int main() {
		
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

	Point a;
	a.SetX(4);
		a.Print();




	return 0;
}