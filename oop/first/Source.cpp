#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	string name;
	int age;
	int weight;
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

	cout << firsHuman.age << endl;
	cout << firsHuman.name << endl;
	cout << firsHuman.weight << " kg" << endl;

	Human secondHuman;
	secondHuman.age = 8;
	secondHuman.name = "Andrey";
	secondHuman.weight = 10;

	cout << "======================================================================" << endl;

	cout << secondHuman.age << endl;
	cout << secondHuman.name << endl;
	cout << secondHuman.weight << " kg" << endl;

	Point a;
	a.x = 1;
	a.y = 3;
	a.z = 5;




	return 0;
}