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
public:
	int x;
	int y;
	int z;
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
		a.x = 1;
		a.y = 3;
		a.z = 5;




	return 0;
}